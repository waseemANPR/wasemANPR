#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for splash
	/// </summary>
	public ref class splash : public System::Windows::Forms::Form
	{
	public:
		splash(void)
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
		~splash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(splash::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-31, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(402, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Algerian", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(5, 251);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(114, 41);
			this->bunifuCustomLabel1->TabIndex = 1;
			this->bunifuCustomLabel1->Text = L"ANPR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(126, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(9, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"|";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(126, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(9, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"|";
			this->label2->Click += gcnew System::EventHandler(this, &splash::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(126, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(9, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"|";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(126, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(9, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"|";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(126, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(9, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"|";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(126, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(9, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"|";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(126, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(9, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"|";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(126, 338);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(9, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"|";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label9->Location = System::Drawing::Point(141, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"ATOMATED NUMBER PLATE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Location = System::Drawing::Point(153, 273);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"RECOGNITION SYSTEM";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->Location = System::Drawing::Point(144, 299);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 20);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Final Year Project";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Location = System::Drawing::Point(153, 325);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"2016-2020";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label13->Location = System::Drawing::Point(14, 363);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(176, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Automatic number-plate  recognition";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Location = System::Drawing::Point(12, 376);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(209, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"is a technology that uses optical character ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label15->Location = System::Drawing::Point(14, 389);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(146, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"recognition on images to read";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Location = System::Drawing::Point(9, 402);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(174, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L" vehicle registration plates to create";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label17->Location = System::Drawing::Point(14, 415);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"vehicle location data.";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-2, 442);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(349, 84);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// splash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(344, 524);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"splash";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"splash";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
