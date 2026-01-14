#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Начальные настройки
			this->Text = "Моя форма";
			labelMessage->Visible = false; // Надпись скрыта при запуске

			// Установим текст для textBox'ов
			textBox1->Text = "Делимое";
			textBox2->Text = "Делитель";
			textBox3->Text = "Результат (корень из частного)";

			// Сбросим все CheckBox'ы
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox3->Checked = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::RadioButton^ radioButton2;
		System::Windows::Forms::RadioButton^ radioButton1;
		System::Windows::Forms::CheckBox^ checkBox1;
		System::Windows::Forms::CheckBox^ checkBox2;
		System::Windows::Forms::CheckBox^ checkBox3;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Label^ labelMessage;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->labelMessage = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать надпись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Стереть надпись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Поменять цвет окна";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(103, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(532, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(295, 155);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация о приложении";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(28, 94);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(187, 20);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Технология приложения";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(28, 49);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(364, 75);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(131, 20);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Серый/Красный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(364, 145);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(82, 20);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Желтый";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(364, 109);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(87, 20);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"Зеленый";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(408, 232);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(219, 22);
			this->textBox3->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(278, 232);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(657, 231);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// labelMessage
			// 
			this->labelMessage->AutoSize = true;
			this->labelMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMessage->ForeColor = System::Drawing::Color::Blue;
			this->labelMessage->Location = System::Drawing::Point(218, 25);
			this->labelMessage->Name = L"labelMessage";
			this->labelMessage->Size = System::Drawing::Size(191, 25);
			this->labelMessage->TabIndex = 15;
			this->labelMessage->Text = L"Кнопка работает.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 269);
			this->Controls->Add(this->labelMessage);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Моя форма";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Переменные для состояния
		bool isGray = true;
		int selectedColor = 0; // 0 - нет выбора, 1 - серый/красный, 2 - зеленый, 3 - желтый

		// === Обработчики событий ===

		// Кнопка 1: Показать надпись
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			labelMessage->Visible = true;
		}

		// Кнопка 2: Стереть надпись
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (labelMessage->Visible) {
				labelMessage->Visible = false;
			}
		}

		// Кнопка 3: Поменять цвет окна
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (selectedColor == 1) { // Серый/Красный
				if (isGray) {
					this->BackColor = Color::Red;
					isGray = false;
				}
				else {
					this->BackColor = Color::Gray;
					isGray = true;
				}
			}
			else if (selectedColor == 2) { // Зеленый
				this->BackColor = Color::Green;
			}
			else if (selectedColor == 3) { // Желтый
				this->BackColor = Color::Yellow;
			}
			else {
				// Если ничего не выбрано, покажем сообщение
				MessageBox::Show("Выберите цвет справа!", "Внимание",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		// Кнопка 4: Закрыть форму
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}

		// Радиокнопка "Автор"
		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (radioButton1->Checked) {
				textBox3->Text = "Автор: Раевская А.А.";
			}
		}

		// Радиокнопка "Технология приложения"
		System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (radioButton2->Checked) {
				textBox3->Text = "Оконное приложение";
			}
		}

		// CheckBox "Серый/Красный"
		System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked) {
				checkBox2->Checked = false;
				checkBox3->Checked = false;
				selectedColor = 1;
			}
			else if (!checkBox2->Checked && !checkBox3->Checked) {
				selectedColor = 0;
			}
		}

		// CheckBox "Желтый"
		System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox2->Checked) {
				checkBox1->Checked = false;
				checkBox3->Checked = false;
				selectedColor = 3;
			}
			else if (!checkBox1->Checked && !checkBox3->Checked) {
				selectedColor = 0;
			}
		}

		// CheckBox "Зеленый"
		System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox3->Checked) {
				checkBox1->Checked = false;
				checkBox2->Checked = false;
				selectedColor = 2;
			}
			else if (!checkBox1->Checked && !checkBox2->Checked) {
				selectedColor = 0;
			}
		}

		// Кнопка "Вычислить"
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Получаем значения
				double a = 0, b = 0;

				// Пытаемся преобразовать текст в числа
				if (!Double::TryParse(textBox1->Text, a) || !Double::TryParse(textBox2->Text, b)) {
					textBox3->Text = "Ошибка: введите числа!";
					return;
				}

				// Проверка деления на ноль
				if (b == 0) {
					textBox3->Text = "Ошибка: деление на ноль!";
					return;
				}

				// Вычисляем частное
				double quotient = a / b;

				// Проверка на отрицательное значение под корнем
				if (quotient < 0) {
					textBox3->Text = "Ошибка: корень из отрицательного числа!";
					return;
				}

				// Вычисляем корень из частного
				double result = Math::Sqrt(quotient);

				// Отображаем результат (без символа корня, чтобы избежать ошибки кодировки)
				textBox3->Text = String::Format("sqrt({0}/{1}) = {2:F4}", a, b, result);

				// Меняем название формы на результат
				this->Text = String::Format("Результат: {0:F4}", result);
			}
			catch (Exception^ ex) {
				textBox3->Text = "Ошибка: " + ex->Message;
			}
		}

		// Кнопка "Очистить"
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
			this->Text = "Моя форма";
		}

		// Пустой обработчик для textBox2
		System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// Этот метод оставлен пустым, но должен быть объявлен
			// так как на него есть ссылка в InitializeComponent
		}
	};
}