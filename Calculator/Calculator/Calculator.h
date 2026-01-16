#pragma once

namespace DefCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonX;
	private: System::Windows::Forms::Button^ buttonzapitae;
	protected:


	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ buttonAC;
	private: System::Windows::Forms::Button^ plus_minus;
	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::Button^ delenie;
	private: System::Windows::Forms::Button^ ymnogenie;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ ravno;

	private: System::Windows::Forms::Button^ stepen;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ vopros;
	private: System::Windows::Forms::Label^ result;


	private: float first_num;
	private: char user_action = ' ';


	protected:

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
			this->buttonX = (gcnew System::Windows::Forms::Button());
			this->buttonzapitae = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->plus_minus = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->delenie = (gcnew System::Windows::Forms::Button());
			this->ymnogenie = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->stepen = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->vopros = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonX
			// 
			this->buttonX->BackColor = System::Drawing::Color::Red;
			this->buttonX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonX->ForeColor = System::Drawing::Color::Black;
			this->buttonX->Location = System::Drawing::Point(262, 10);
			this->buttonX->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonX->Name = L"buttonX";
			this->buttonX->Size = System::Drawing::Size(32, 30);
			this->buttonX->TabIndex = 0;
			this->buttonX->Text = L"X";
			this->buttonX->UseVisualStyleBackColor = false;
			this->buttonX->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// buttonzapitae
			// 
			this->buttonzapitae->BackColor = System::Drawing::Color::Gray;
			this->buttonzapitae->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonzapitae->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonzapitae->Location = System::Drawing::Point(82, 425);
			this->buttonzapitae->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonzapitae->Name = L"buttonzapitae";
			this->buttonzapitae->Size = System::Drawing::Size(56, 46);
			this->buttonzapitae->TabIndex = 1;
			this->buttonzapitae->Text = L",";
			this->buttonzapitae->UseVisualStyleBackColor = false;
			this->buttonzapitae->Click += gcnew System::EventHandler(this, &Calculator::buttonzapitae_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Gray;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(9, 425);
			this->button0->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(56, 46);
			this->button0->TabIndex = 2;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(9, 364);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(82, 364);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(158, 364);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(9, 304);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 46);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(82, 304);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 46);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(158, 304);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 46);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(9, 243);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 46);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(82, 243);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 46);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(158, 243);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 46);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::number_click);
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonAC->Location = System::Drawing::Point(9, 183);
			this->buttonAC->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(68, 46);
			this->buttonAC->TabIndex = 12;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &Calculator::buttonAC_Click);
			// 
			// plus_minus
			// 
			this->plus_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus_minus->ForeColor = System::Drawing::SystemColors::Control;
			this->plus_minus->Location = System::Drawing::Point(90, 183);
			this->plus_minus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->plus_minus->Name = L"plus_minus";
			this->plus_minus->Size = System::Drawing::Size(65, 46);
			this->plus_minus->TabIndex = 13;
			this->plus_minus->Text = L"+/-";
			this->plus_minus->UseVisualStyleBackColor = false;
			this->plus_minus->Click += gcnew System::EventHandler(this, &Calculator::plus_minus_Click);
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent->ForeColor = System::Drawing::SystemColors::Control;
			this->percent->Location = System::Drawing::Point(168, 183);
			this->percent->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(56, 46);
			this->percent->TabIndex = 14;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &Calculator::percent_Click);
			// 
			// delenie
			// 
			this->delenie->BackColor = System::Drawing::Color::Yellow;
			this->delenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delenie->Location = System::Drawing::Point(234, 183);
			this->delenie->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->delenie->Name = L"delenie";
			this->delenie->Size = System::Drawing::Size(56, 46);
			this->delenie->TabIndex = 15;
			this->delenie->Text = L"/";
			this->delenie->UseVisualStyleBackColor = false;
			this->delenie->Click += gcnew System::EventHandler(this, &Calculator::delenie_Click);
			// 
			// ymnogenie
			// 
			this->ymnogenie->BackColor = System::Drawing::Color::Yellow;
			this->ymnogenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ymnogenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ymnogenie->Location = System::Drawing::Point(234, 243);
			this->ymnogenie->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ymnogenie->Name = L"ymnogenie";
			this->ymnogenie->Size = System::Drawing::Size(56, 46);
			this->ymnogenie->TabIndex = 16;
			this->ymnogenie->Text = L"*";
			this->ymnogenie->UseVisualStyleBackColor = false;
			this->ymnogenie->Click += gcnew System::EventHandler(this, &Calculator::ymnogenie_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Yellow;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(234, 304);
			this->minus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(56, 46);
			this->minus->TabIndex = 17;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Calculator::minus_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Yellow;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(234, 364);
			this->plus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(56, 46);
			this->plus->TabIndex = 18;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Calculator::plus_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::Yellow;
			this->ravno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->Location = System::Drawing::Point(234, 425);
			this->ravno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(60, 46);
			this->ravno->TabIndex = 19;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &Calculator::ravno_Click);
			// 
			// stepen
			// 
			this->stepen->BackColor = System::Drawing::Color::Yellow;
			this->stepen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stepen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stepen->Location = System::Drawing::Point(150, 425);
			this->stepen->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->stepen->Name = L"stepen";
			this->stepen->Size = System::Drawing::Size(28, 46);
			this->stepen->TabIndex = 20;
			this->stepen->Text = L"^";
			this->stepen->UseVisualStyleBackColor = false;
			this->stepen->Click += gcnew System::EventHandler(this, &Calculator::stepen_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Yellow;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(190, 425);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(34, 46);
			this->button11->TabIndex = 21;
			this->button11->Text = L"sqrt";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// vopros
			// 
			this->vopros->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->vopros->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vopros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vopros->ForeColor = System::Drawing::SystemColors::Control;
			this->vopros->Location = System::Drawing::Point(9, 10);
			this->vopros->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->vopros->Name = L"vopros";
			this->vopros->Size = System::Drawing::Size(31, 38);
			this->vopros->TabIndex = 22;
			this->vopros->Text = L"\?";
			this->vopros->UseVisualStyleBackColor = false;
			this->vopros->Click += gcnew System::EventHandler(this, &Calculator::vopros_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->result->Location = System::Drawing::Point(9, 95);
			this->result->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(285, 70);
			this->result->TabIndex = 23;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(303, 480);
			this->Controls->Add(this->result);
			this->Controls->Add(this->vopros);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->stepen);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->ymnogenie);
			this->Controls->Add(this->delenie);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->plus_minus);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonzapitae);
			this->Controls->Add(this->buttonX);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void number_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->result->Text == "0")
			this->result->Text = button->Text;
		else
			this->result->Text += button->Text;
	}
	private: System::Void delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void ymnogenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result->Text);
		this->user_action = action;
		this->result->Text = "0";
	}
	private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->result->Text);
		float res;

		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '/':
			if (second == 0) {
				res = 0;
				MessageBox::Show(this, "На ноль делить нельзя!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;
		case '^':
			res = Math::Pow(this->first_num, second);
			break;

		}

		this->result->Text = System::Convert::ToString(res);

	}
	private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
		this->first_num = 0;
		this->user_action = ' ';
	}
	private: System::Void buttonzapitae_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result->Text;

		if (!text->Contains(","))
			this->result->Text = text + ",";
	}
	private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) {
		first_num = System::Convert::ToDouble(this->result->Text);
		first_num /= 100;

		this->result->Text = System::Convert::ToString(first_num);
	}
	private: System::Void plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result->Text);
		num *= -1;
		this->result->Text = System::Convert::ToString(num);
	}

	private: System::Void stepen_Click(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToDouble(this->result->Text);


		this->user_action = '^';

		this->result->Text = "";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		double chislo = System::Convert::ToDouble(this->result->Text);

		if (chislo < 0) {
			MessageBox::Show(this, "Попытка извлечения корня из отрицательного числа!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->result->Text = "0";
			return;
		}
		double rezultat = Math::Sqrt(chislo);

		this->result->Text = System::Convert::ToString(rezultat);

	}
	private: System::Void vopros_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Калькулятор: обычный\n\n" +
			"Основные операции: сложение, вычитание, умножение, деление, степень, корень, процент\n",
			"Справка",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
	}
	};
}