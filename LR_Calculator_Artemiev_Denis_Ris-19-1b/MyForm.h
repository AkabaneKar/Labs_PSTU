#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

namespace LR33CalculatorArtemievDenisRis191b {

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
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ lblShowOP;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->lblShowOP = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(28, 12);
			this->textBox1->MaximumSize = System::Drawing::Size(500, 50);
			this->textBox1->MinimumSize = System::Drawing::Size(500, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(500, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(28, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(109, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(271, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 80);
			this->button3->TabIndex = 4;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Arithm);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(190, 169);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 80);
			this->button4->TabIndex = 3;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(271, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 80);
			this->button5->TabIndex = 8;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Arithm);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(190, 255);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 80);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(109, 255);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 80);
			this->button7->TabIndex = 6;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(28, 255);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 80);
			this->button8->TabIndex = 5;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(271, 341);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 80);
			this->button9->TabIndex = 12;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithm);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(190, 341);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 80);
			this->button10->TabIndex = 11;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(109, 341);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 80);
			this->button11->TabIndex = 10;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(28, 341);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 80);
			this->button12->TabIndex = 9;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(271, 427);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 80);
			this->button13->TabIndex = 16;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Arithm);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(190, 427);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 80);
			this->button14->TabIndex = 15;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(109, 427);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 80);
			this->button15->TabIndex = 14;
			this->button15->Text = L".";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(28, 427);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 80);
			this->button16->TabIndex = 13;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// lblShowOP
			// 
			this->lblShowOP->AutoSize = true;
			this->lblShowOP->BackColor = System::Drawing::Color::White;
			this->lblShowOP->Location = System::Drawing::Point(70, 236);
			this->lblShowOP->Name = L"lblShowOP";
			this->lblShowOP->Size = System::Drawing::Size(0, 13);
			this->lblShowOP->TabIndex = 17;
			this->lblShowOP->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(28, 84);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 80);
			this->button17->TabIndex = 18;
			this->button17->Text = L"CE";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(109, 83);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 80);
			this->button18->TabIndex = 19;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(271, 83);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 80);
			this->button19->TabIndex = 21;
			this->button19->Text = L"+/-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(190, 84);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 80);
			this->button20->TabIndex = 20;
			this->button20->Text = L"<--";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->BackColor = System::Drawing::Color::White;
			this->lbl->Location = System::Drawing::Point(33, 17);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(0, 13);
			this->lbl->TabIndex = 22;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(352, 84);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 80);
			this->button21->TabIndex = 24;
			this->button21->Text = L"Log";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(352, 255);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 79);
			this->button22->TabIndex = 23;
			this->button22->Text = L"См. Осн";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(352, 170);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 80);
			this->button23->TabIndex = 25;
			this->button23->Text = L"ln";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(352, 340);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 79);
			this->button24->TabIndex = 26;
			this->button24->Text = L"^";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Arithm);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(429, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 24);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Основание";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(429, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 24);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Пок-ль Степени";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(434, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(124, 20);
			this->textBox2->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(434, 177);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 20);
			this->textBox3->TabIndex = 32;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 533);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->lblShowOP);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double Num1;
		double Num2;
		double Num3;
		double Num4;
		double res;
		double res1;
		String^ opi;
		String^ opii;

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		//button C
		textBox1->Text = "0";
		lbl->Text = "";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		//button CE
		textBox1->Text = "0";
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numb = safe_cast<Button^>(sender);
		if (textBox1->Text == "0")
		{
			textBox1->Text = Numb->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numb->Text;
		}
	}
	private: System::Void Arithm(System::Object^ sender, System::EventArgs^ e) {
		Button^ op = safe_cast<Button^>(sender);
		Num1 = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		opi = op->Text;
		lbl->Text = System::Convert::ToString(Num1) + " " + opi;

	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		lbl->Text = "";
		Num2 = Double::Parse(textBox1->Text);
		if (opi == "+")
		{
			res = Num1 + Num2;
			textBox1->Text = System::Convert::ToString(res);
		}
		else if (opi == "-")
		{
			res = Num1 - Num2;
			textBox1->Text = System::Convert::ToString(res);
		}
		else if (opi == "*")
		{
			res = Num1 * Num2;
			textBox1->Text = System::Convert::ToString(res);
		}
		if (opi == "^")
		{
			res = pow(Num1, Num2);
			textBox1->Text = System::Convert::ToString(res);
		}
		else if (opi == "/")
		{

			if (Num2 != 0) {
				res = Num1 / Num2;

			}
			else { MessageBox::Show("Попытка деления не удалась", "Ошибка"); }
		}
		textBox1->Text = System::Convert::ToString(res);
	}





	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "0";
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textBox1->Text->Contains("."))
		{
			textBox1->Text = textBox1->Text + ".";
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Contains("-"))
		{
			textBox1->Text = textBox1->Text->Remove(0, 1);
		}
		else
		{
			textBox1->Text = "-" + textBox1->Text;
		}
	}



	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		Num3 = Double::Parse(textBox2->Text);
		Num4 = Double::Parse(textBox3->Text);
		if ((textBox3->Text == "0"))
		{
			MessageBox::Show("Неверный ввод", "Ошибка");
		}
		else {
			res = (log(Num4) / log(Num3));
			textBox1->Text = System::Convert::ToString(res);
		}

	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "e";
		if ((textBox3->Text == "0"))
		{
			MessageBox::Show("Неверный ввод", "Ошибка");
		}
		else {
			Num3 = M_E;
			Num4 = Double::Parse(textBox3->Text);
			res = (log(Num4) / log(Num3));
			textBox1->Text = System::Convert::ToString(res);
		}

	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox3->Text == "0"))
		{
			MessageBox::Show("Неверный ввод", "Ошибка");
		}
		else {
			Num3 = Double::Parse(textBox2->Text);
			Num4 = Double::Parse(textBox3->Text);
			res = (1 / ((log(Num3) / log(Num4))));
			textBox1->Text = System::Convert::ToString(res);
		}
	}
	};
}
