#pragma once

namespace Calculator {

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
			// Инициализация переменных
			firstNumber = 0;
			secondNumber = 0;
			result = 0;
			operation = L"";
			isNewNumber = true;
			hasDecimal = false;

			// Инициализация display
			display->Text = "0";
			this->Text = "Калькулятор";
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
		// Поле для отображения
		System::Windows::Forms::TextBox^ display;

		// Переменные для работы калькулятора
		double firstNumber;
		double secondNumber;
		double result;
		String^ operation;
		bool isNewNumber;
		bool hasDecimal;

		// Кнопки
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::Button^ button9;
		System::Windows::Forms::Button^ button10;
		System::Windows::Forms::Button^ button11;
		System::Windows::Forms::Button^ button12;
		System::Windows::Forms::Button^ button13;
		System::Windows::Forms::Button^ button14;
		System::Windows::Forms::Button^ button15;
		System::Windows::Forms::Button^ button16;
		System::Windows::Forms::Button^ button17;
		System::Windows::Forms::Button^ button18;
		System::Windows::Forms::Button^ button19;
		System::Windows::Forms::Button^ button20;
		System::Windows::Forms::Button^ button21;
		System::Windows::Forms::Button^ button22;
		System::Windows::Forms::Button^ button23;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Функция для преобразования строки с запятой в число
		double ParseWithComma(String^ text)
		{
			// Заменяем запятую на точку для парсинга
			String^ formattedText = text->Replace(",", ".");
			return Double::Parse(formattedText);
		}

		// Функция для форматирования числа с запятой
		String^ FormatWithComma(double number)
		{
			// Форматируем число с 10 знаками после запятой
			String^ resultStr = number.ToString("F10");

			// Убираем лишние нули в конце
			resultStr = resultStr->TrimEnd('0');
			resultStr = resultStr->TrimEnd(',');

			// Заменяем точку на запятую, если она есть
			resultStr = resultStr->Replace(".", ",");

			// Если после удаления нулей осталась только запятая, удаляем ее
			if (resultStr->EndsWith(","))
				resultStr = resultStr->TrimEnd(',');

			// Если строка пустая, возвращаем "0"
			if (resultStr->Length == 0)
				resultStr = "0";

			return resultStr;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::Color::Black;
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->display->ForeColor = System::Drawing::Color::White;
			this->display->Location = System::Drawing::Point(0, 71);
			this->display->Name = L"display";
			this->display->ReadOnly = true;
			this->display->Size = System::Drawing::Size(384, 83);
			this->display->TabIndex = 23;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Firebrick;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(345, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(0, 320);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 62);
			this->button3->TabIndex = 2;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(0, 252);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 62);
			this->button4->TabIndex = 3;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(0, 388);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 62);
			this->button5->TabIndex = 4;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(0, 456);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 62);
			this->button6->TabIndex = 5;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(0, 184);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 62);
			this->button7->TabIndex = 6;
			this->button7->Text = L"AC";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(98, 456);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 62);
			this->button8->TabIndex = 7;
			this->button8->Text = L",";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(98, 388);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(79, 62);
			this->button9->TabIndex = 8;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(98, 320);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(79, 62);
			this->button10->TabIndex = 9;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(98, 252);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 62);
			this->button11->TabIndex = 10;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(98, 184);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(79, 62);
			this->button12->TabIndex = 11;
			this->button12->Text = L"+/-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(199, 184);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 62);
			this->button13->TabIndex = 12;
			this->button13->Text = L"%";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(199, 252);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 62);
			this->button14->TabIndex = 13;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Yellow;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(291, 184);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(81, 62);
			this->button15->TabIndex = 14;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Yellow;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(291, 252);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(81, 62);
			this->button16->TabIndex = 15;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(199, 320);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 62);
			this->button17->TabIndex = 16;
			this->button17->Text = L"6";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(199, 388);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 62);
			this->button18->TabIndex = 17;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Yellow;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(291, 320);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(81, 62);
			this->button19->TabIndex = 18;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Yellow;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(291, 388);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(81, 62);
			this->button20->TabIndex = 19;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Yellow;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(189, 456);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(44, 62);
			this->button21->TabIndex = 20;
			this->button21->Text = L"^";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Yellow;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(239, 456);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 62);
			this->button22->TabIndex = 21;
			this->button22->Text = L"sqrt";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Yellow;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(291, 456);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(81, 62);
			this->button23->TabIndex = 22;
			this->button23->Text = L"=";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InfoText;
			this->ClientSize = System::Drawing::Size(384, 518);
			this->Controls->Add(this->display);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Обработка цифровых кнопок
		System::Void NumberButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ button = safe_cast<Button^>(sender);
			String^ number = button->Text;

			if (isNewNumber)
			{
				display->Text = number;
				isNewNumber = false;
				hasDecimal = false;
			}
			else
			{
				// Проверка на максимальную длину
				if (display->Text->Length < 20)
				{
					display->Text += number;
				}
			}
		}

		// Обработка операций
		System::Void OperationButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ button = safe_cast<Button^>(sender);

			try
			{
				// Получаем текущее число
				firstNumber = ParseWithComma(display->Text);

				// Сохраняем операцию
				operation = button->Text;

				// Готовимся к вводу нового числа
				isNewNumber = true;
				hasDecimal = false;

				// Отображаем первое число для визуального подтверждения
				display->Text = FormatWithComma(firstNumber) + " " + operation;
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка!";
				isNewNumber = true;
			}
		}

		// Кнопка "?" (справка)
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MessageBox::Show("Калькулятор v1.0\nПоддерживаемые операции:\n" +
				"+ - сложение\n- - вычитание\n* - умножение\n/ - деление\n" +
				"^ - возведение в степень\nsqrt - квадратный корень\n% - проценты\n" +
				"+/- - смена знака\n, - десятичная запятая\nAC - очистка\n\n" +
				"Пример: 26,9 + 34,90 = 61,8",
				"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// Кнопка "X" (закрыть)
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		// Кнопка "AC" (очистка)
		System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
		{
			display->Text = "0";
			firstNumber = 0;
			secondNumber = 0;
			result = 0;
			operation = "";
			isNewNumber = true;
			hasDecimal = false;
		}

		// Кнопка "," (десятичная запятая)
		System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (isNewNumber)
			{
				display->Text = "0,";
				isNewNumber = false;
				hasDecimal = true;
			}
			else if (!hasDecimal)
			{
				display->Text += ",";
				hasDecimal = true;
			}
		}

		// Кнопка "+/-" (смена знака)
		System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				double current = ParseWithComma(display->Text);
				current = -current;
				display->Text = FormatWithComma(current);
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка!";
			}
		}

		// Кнопка "%" (проценты)
		System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				double current = ParseWithComma(display->Text);
				current = current / 100.0;
				display->Text = FormatWithComma(current);
				isNewNumber = true;
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка!";
			}
		}

		// Кнопка "^" (возведение в степень)
		System::Void button21_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				firstNumber = ParseWithComma(display->Text);
				operation = "^";
				isNewNumber = true;
				hasDecimal = false;

				// Отображаем первое число для визуального подтверждения
				display->Text = FormatWithComma(firstNumber) + " ^";
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка!";
			}
		}

		// Кнопка "sqrt" (квадратный корень)
		System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				double number = ParseWithComma(display->Text);

				// Проверка на отрицательное число
				if (number < 0)
				{
					throw gcnew ArgumentException("Корень из отрицательного числа!");
				}

				result = Math::Sqrt(number);
				display->Text = FormatWithComma(result);

				// Сохраняем результат для следующих операций
				firstNumber = result;
				isNewNumber = true;
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка ввода!";
			}
			catch (ArgumentException^ ex)
			{
				display->Text = ex->Message;
				isNewNumber = true;
			}
		}

		// Кнопка "=" (равно)
		System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				if (operation == "")
					return;

				// Если display содержит операцию (например "26,9 +"), нужно извлечь только второе число
				String^ displayText = display->Text;

				// Удаляем операцию и первое число из строки
				String^ secondNumberStr = displayText;
				if (displayText->Contains(" " + operation))
				{
					// Если строка в формате "число операция", берем только число до операции
					int spaceIndex = displayText->IndexOf(" ");
					if (spaceIndex > 0)
					{
						// Пытаемся распарсить всю строку как число
						secondNumberStr = displayText;
					}
				}

				// Парсим второе число
				secondNumber = ParseWithComma(secondNumberStr);

				// Выполняем операцию с обработкой исключений
				if (operation == "+")
				{
					result = firstNumber + secondNumber;
				}
				else if (operation == "-")
				{
					result = firstNumber - secondNumber;
				}
				else if (operation == "*")
				{
					result = firstNumber * secondNumber;
				}
				else if (operation == "/")
				{
					// Проверка деления на ноль
					if (Math::Abs(secondNumber) < 0.0000000001) // Более точная проверка
					{
						throw gcnew DivideByZeroException("Деление на ноль!");
					}
					result = firstNumber / secondNumber;
				}
				else if (operation == "^")
				{
					result = Math::Pow(firstNumber, secondNumber);
				}

				// Проверка на переполнение
				if (Double::IsInfinity(result) || Double::IsNaN(result))
				{
					throw gcnew OverflowException("Переполнение!");
				}

				// Отображаем результат с запятой и убираем лишние нули
				display->Text = FormatWithComma(result);

				// Сохраняем результат для следующих операций
				firstNumber = result;
				isNewNumber = true;
				operation = "";
			}
			catch (FormatException^)
			{
				display->Text = "Ошибка ввода!";
				isNewNumber = true;
				operation = "";
			}
			catch (DivideByZeroException^ ex)
			{
				display->Text = ex->Message;
				isNewNumber = true;
				operation = "";
			}
			catch (OverflowException^ ex)
			{
				display->Text = ex->Message;
				isNewNumber = true;
				operation = "";
			}
			catch (Exception^ ex)
			{
				display->Text = "Ошибка: " + ex->Message;
				isNewNumber = true;
				operation = "";
			}
		}
	};
}