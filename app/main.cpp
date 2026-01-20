// Добавьте эти строки в начало файла
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")

#include <windows.h>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
void RegisterUser(HWND);
void LoginUser(HWND);
void ForgotPassword(HWND);

// Global UI Elements
HWND hUsername, hPassword, hRegister, hLogin, hForgot, hLabel;

void CreateMainWindow(HWND hwnd) {
    // Labels
    CreateWindow("STATIC", "Username:", WS_VISIBLE | WS_CHILD, 20, 20, 80, 25, hwnd, NULL, NULL, NULL);
    CreateWindow("STATIC", "Password:", WS_VISIBLE | WS_CHILD, 20, 60, 80, 25, hwnd, NULL, NULL, NULL);

    // Input Fields
    hUsername = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 20, 200, 25, hwnd, NULL, NULL, NULL);
    hPassword = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_PASSWORD, 100, 60, 200, 25, hwnd, NULL, NULL, NULL);

    // Buttons
    hRegister = CreateWindow("BUTTON", "Register", WS_VISIBLE | WS_CHILD, 20, 100, 90, 30, hwnd, (HMENU)1, NULL, NULL);
    hLogin = CreateWindow("BUTTON", "Login", WS_VISIBLE | WS_CHILD, 130, 100, 90, 30, hwnd, (HMENU)2, NULL, NULL);
    hForgot = CreateWindow("BUTTON", "Forgot Password", WS_VISIBLE | WS_CHILD, 240, 100, 130, 30, hwnd, (HMENU)3, NULL, NULL);
}

void RegisterUser(HWND hwnd) {
    char username[30], password[30];
    GetWindowText(hUsername, username, 30);
    GetWindowText(hPassword, password, 30);

    // Проверка на пустые поля
    if (strlen(username) == 0 || strlen(password) == 0) {
        MessageBox(hwnd, "Please fill in all fields!", "Error", MB_OK | MB_ICONERROR);
        return;
    }

    ofstream file("users.txt", ios::app);
    if (file.is_open()) {
        file << username << " " << password << endl;
        file.close();
        MessageBox(hwnd, "Registration Successful!", "Success", MB_OK | MB_ICONINFORMATION);
    } else {
        MessageBox(hwnd, "Cannot save user data!", "Error", MB_OK | MB_ICONERROR);
    }
}

void LoginUser(HWND hwnd) {
    char username[30], password[30], u[30], p[30];
    GetWindowText(hUsername, username, 30);
    GetWindowText(hPassword, password, 30);

    ifstream file("users.txt");
    if (file.is_open()) {
        while (file >> u >> p) {
            if (strcmp(u, username) == 0 && strcmp(p, password) == 0) {
                file.close();
                MessageBox(hwnd, "Login Successful!", "Success", MB_OK | MB_ICONINFORMATION);
                return;
            }
        }
        file.close();
    }
    MessageBox(hwnd, "Invalid Username or Password!", "Error", MB_OK | MB_ICONERROR);
}

void ForgotPassword(HWND hwnd) {
    char username[30], u[30], p[30];
    GetWindowText(hUsername, username, 30);

    ifstream file("users.txt");
    if (file.is_open()) {
        while (file >> u >> p) {
            if (strcmp(u, username) == 0) {
                file.close();
                char message[100];
                sprintf_s(message, "Your Password: %s", p);
                MessageBox(hwnd, message, "Password Found", MB_OK | MB_ICONINFORMATION);
                return;
            }
        }
        file.close();
    }
    MessageBox(hwnd, "Username not found!", "Error", MB_OK | MB_ICONERROR);
}

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
        case WM_CREATE:
            CreateMainWindow(hwnd);
            break;
        case WM_COMMAND:
            switch (LOWORD(wp)) {  // Исправлено: используем LOWORD(wp)
                case 1: RegisterUser(hwnd); break;
                case 2: LoginUser(hwnd); break;
                case 3: ForgotPassword(hwnd); break;
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wp, lp);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR args, int ncmdshow) {
    WNDCLASS wc = { 0 };
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpfnWndProc = WindowProcedure;
    wc.lpszClassName = "LoginApp";
    wc.style = CS_HREDRAW | CS_VREDRAW;  // Добавлено

    if (!RegisterClass(&wc)) {
        MessageBox(NULL, "Window Registration Failed!", "Error", MB_OK | MB_ICONERROR);
        return -1;
    }

    HWND hwnd = CreateWindow("LoginApp", "Modern Login System", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        100, 100, 400, 200, NULL, NULL, hInst, NULL);

    if (!hwnd) {
        MessageBox(NULL, "Window Creation Failed!", "Error", MB_OK | MB_ICONERROR);
        return -1;
    }

    // Показать и обновить окно
    ShowWindow(hwnd, ncmdshow);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}