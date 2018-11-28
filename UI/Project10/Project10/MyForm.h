#pragma once


#include <iostream>
#include <string>
#include <Windows.h>
#include <list>
#include <vector>
#include <array>


namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}






	private:


		System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  Result;
	private: System::Windows::Forms::TextBox^  textBox1;

















































	protected:



	private: int count;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button1->Location = System::Drawing::Point(519, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"УЗНАТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Result
			// 
			this->Result->Location = System::Drawing::Point(506, 243);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(100, 20);
			this->Result->TabIndex = 2;
			this->Result->TextChanged += gcnew System::EventHandler(this, &MyForm::Result_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(52, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 214);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(66, 240);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(52, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"5";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(124, 240);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(52, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"5";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(124, 214);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(52, 20);
			this->textBox7->TabIndex = 11;
			this->textBox7->Text = L"4";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(124, 188);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(52, 20);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"3";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(124, 162);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(52, 20);
			this->textBox9->TabIndex = 9;
			this->textBox9->Text = L"2";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(124, 136);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(52, 20);
			this->textBox10->TabIndex = 8;
			this->textBox10->Text = L"1";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(182, 240);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(52, 20);
			this->textBox11->TabIndex = 17;
			this->textBox11->Text = L"5";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(182, 214);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(52, 20);
			this->textBox12->TabIndex = 16;
			this->textBox12->Text = L"4";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(182, 188);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(52, 20);
			this->textBox13->TabIndex = 15;
			this->textBox13->Text = L"3";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(182, 162);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(52, 20);
			this->textBox14->TabIndex = 14;
			this->textBox14->Text = L"2";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(182, 136);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(52, 20);
			this->textBox15->TabIndex = 13;
			this->textBox15->Text = L"1";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(240, 240);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(52, 20);
			this->textBox16->TabIndex = 22;
			this->textBox16->Text = L"5";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(240, 214);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(52, 20);
			this->textBox17->TabIndex = 21;
			this->textBox17->Text = L"4";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(240, 188);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(52, 20);
			this->textBox18->TabIndex = 20;
			this->textBox18->Text = L"3";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(240, 162);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(52, 20);
			this->textBox19->TabIndex = 19;
			this->textBox19->Text = L"2";
			// 
			// textBox20
			// 
			this->textBox20->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox20->Location = System::Drawing::Point(240, 136);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(52, 20);
			this->textBox20->TabIndex = 18;
			this->textBox20->Text = L"1";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(298, 240);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(52, 20);
			this->textBox21->TabIndex = 27;
			this->textBox21->Text = L"5";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(298, 214);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(52, 20);
			this->textBox22->TabIndex = 26;
			this->textBox22->Text = L"4";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(298, 188);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(52, 20);
			this->textBox23->TabIndex = 25;
			this->textBox23->Text = L"3";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(298, 162);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(52, 20);
			this->textBox24->TabIndex = 24;
			this->textBox24->Text = L"2";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(298, 136);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(52, 20);
			this->textBox25->TabIndex = 23;
			this->textBox25->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(798, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label3->Location = System::Drawing::Point(478, 76);
			this->label3->MinimumSize = System::Drawing::Size(0, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 40);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Верно ли, что";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label4->Location = System::Drawing::Point(388, 116);
			this->label4->MinimumSize = System::Drawing::Size(0, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(328, 40);
			this->label4->TabIndex = 31;
			this->label4->Text = L"ровно два столбца этой матрицы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label5->Location = System::Drawing::Point(413, 156);
			this->label5->MinimumSize = System::Drawing::Size(0, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 40);
			this->label5->TabIndex = 32;
			this->label5->Text = L"упордочены по возростанию";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(754, 450);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}




#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {





			try
			{

				if (Convert::ToInt32(this->textBox5->Text) > Convert::ToInt32(this->textBox4->Text))
					if (Convert::ToInt32(this->textBox3->Text) > Convert::ToInt32(this->textBox2->Text))
						if (Convert::ToInt32(this->textBox2->Text) > Convert::ToInt32(this->textBox1->Text))
							count++;

			}
			catch (Exception^)
			{
				Result->Text = "";

				this->textBox5->Text = "";
				this->textBox4->Text = "";
				this->textBox3->Text = "";
				this->textBox2->Text = "";
				this->textBox1->Text = "";

				this->label1->Text = "Wrong Data!!!";

			}


			try
			{

				if (Convert::ToInt32(this->textBox6->Text) > Convert::ToInt32(this->textBox7->Text))
					if (Convert::ToInt32(this->textBox7->Text) > Convert::ToInt32(this->textBox8->Text))
						if (Convert::ToInt32(this->textBox8->Text) > Convert::ToInt32(this->textBox9->Text))
							if (Convert::ToInt32(this->textBox9->Text) > Convert::ToInt32(this->textBox10->Text))
								count++;

			}
			catch (Exception^)
			{
				this->textBox10->Text = "";
				this->textBox9->Text = "";
				this->textBox8->Text = "";
				this->textBox9->Text = "";
				this->textBox7->Text = "";

				Result->Text = "Wrong Data!!!";

			}

			try
			{
				if (Convert::ToInt32(this->textBox11->Text) > Convert::ToInt32(this->textBox12->Text))
					if (Convert::ToInt32(this->textBox12->Text) > Convert::ToInt32(this->textBox13->Text))
						if (Convert::ToInt32(this->textBox13->Text) > Convert::ToInt32(this->textBox14->Text))
							if (Convert::ToInt32(this->textBox14->Text) > Convert::ToInt32(this->textBox15->Text))
								count++;



			}
			catch (Exception^)
			{
				this->textBox11->Text = "";
				this->textBox12->Text = "";
				this->textBox13->Text = "";
				this->textBox14->Text = "";
				this->textBox15->Text = "";

				Result->Text = "Wrong Data!!!";

			}

			try
			{

				if (Convert::ToInt32(this->textBox16->Text) > Convert::ToInt32(this->textBox17->Text))
					if (Convert::ToInt32(this->textBox17->Text) > Convert::ToInt32(this->textBox18->Text))
						if (Convert::ToInt32(this->textBox18->Text) > Convert::ToInt32(this->textBox19->Text))
							if (Convert::ToInt32(this->textBox19->Text) > Convert::ToInt32(this->textBox20->Text))
								count++;

			}
			catch (Exception^)
			{
				this->textBox16->Text = "";
				this->textBox17->Text = "";
				this->textBox18->Text = "";
				this->textBox19->Text = "";
				this->textBox20->Text = "";

				Result->Text = "Wrong Data!!!";

			}

			try
			{

				if (Convert::ToInt32(this->textBox21->Text) > Convert::ToInt32(this->textBox22->Text))
					if (Convert::ToInt32(this->textBox22->Text) > Convert::ToInt32(this->textBox23->Text))
						if (Convert::ToInt32(this->textBox23->Text) > Convert::ToInt32(this->textBox24->Text))
							if (Convert::ToInt32(this->textBox24->Text) > Convert::ToInt32(this->textBox25->Text))
								count++;


			}
			catch (Exception^)
			{

				this->textBox21->Text = "";
				this->textBox22->Text = "";
				this->textBox23->Text = "";
				this->textBox24->Text = "";
				this->textBox25->Text = "";


				Result->Text = "Wrong Data!!!";

			}
		
		
		try
		{
			Convert::ToInt32(this->textBox1->Text);
			Convert::ToInt32(this->textBox6->Text);
			Convert::ToInt32(this->textBox11->Text);
			Convert::ToInt32(this->textBox16->Text);
			Convert::ToInt32(this->textBox21->Text);
				
		}
		catch (Exception^)
		{

			Result->Text = "Wrong data";
			
			return;
		}



	

		if (count == 2)
		{
			Result->Text = "Да";
			this->label1->Text = "";
		}
		else 
		{
			Result->Text = "Нет";
			
		}

		count = 0;


	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}





	private: System::Void Result_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
