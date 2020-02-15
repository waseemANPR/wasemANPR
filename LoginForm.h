#pragma once
#include"SignupForm.h"
#include"splash.h"
#include"MyForm2.h"
namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			System::Threading::Thread^ t;
			t = gcnew System::Threading::Thread(gcnew ThreadStart(startsp));
			t->Start();
			Thread::Sleep(5000);
			
			InitializeComponent();
			t->Abort();
			//
			//TODO: Add the constructor code here
			//
		}
		static void startsp()
		{
			Application::Run(gcnew Project6::splash());
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;



	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox7;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox6;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox5;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox4;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuMetroTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuMetroTextbox7 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox6 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(553, 471);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(549, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(429, 715);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Login";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(816, 392);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(131, 44);
			this->bunifuFlatButton1->TabIndex = 5;
			this->bunifuFlatButton1->Text = L"Login";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &LoginForm::bunifuFlatButton1_Click);
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(579, 163);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(37, 13);
			this->bunifuCustomLabel1->TabIndex = 6;
			this->bunifuCustomLabel1->Text = L"Email";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(579, 250);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(61, 13);
			this->bunifuCustomLabel2->TabIndex = 7;
			this->bunifuCustomLabel2->Text = L"Password";
			// 
			// bunifuMetroTextbox1
			// 
			this->bunifuMetroTextbox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox1->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox1->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox1->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox1->BorderThickness = 3;
			this->bunifuMetroTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox1->isPassword = false;
			this->bunifuMetroTextbox1->Location = System::Drawing::Point(666, 149);
			this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->Size = System::Drawing::Size(250, 44);
			this->bunifuMetroTextbox1->TabIndex = 8;
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox2
			// 
			this->bunifuMetroTextbox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox2->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox2->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox2->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox2->BorderThickness = 3;
			this->bunifuMetroTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox2->isPassword = true;
			this->bunifuMetroTextbox2->Location = System::Drawing::Point(666, 235);
			this->bunifuMetroTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
			this->bunifuMetroTextbox2->Size = System::Drawing::Size(250, 44);
			this->bunifuMetroTextbox2->TabIndex = 9;
			this->bunifuMetroTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->Location = System::Drawing::Point(579, 413);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(121, 13);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"I Need an Account\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->bunifuFlatButton2);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuMetroTextbox7);
			this->panel1->Controls->Add(this->bunifuMetroTextbox6);
			this->panel1->Controls->Add(this->bunifuMetroTextbox5);
			this->panel1->Controls->Add(this->bunifuMetroTextbox4);
			this->panel1->Controls->Add(this->bunifuMetroTextbox3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(549, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(429, 471);
			this->panel1->TabIndex = 11;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->linkLabel2->LinkColor = System::Drawing::Color::LightSeaGreen;
			this->linkLabel2->Location = System::Drawing::Point(269, 363);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(157, 13);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"I already have an Account";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel2_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(24, 363);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(98, 94);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->UseWaitCursor = true;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox4_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Black;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"Signup";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(282, 413);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Black;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(131, 44);
			this->bunifuFlatButton2->TabIndex = 14;
			this->bunifuFlatButton2->Text = L"Signup";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &LoginForm::bunifuFlatButton2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->radioButton2->Location = System::Drawing::Point(282, 143);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->radioButton1->Location = System::Drawing::Point(165, 143);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 17);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(21, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(21, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Conf.Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(21, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(21, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(21, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(21, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"First Name";
			// 
			// bunifuMetroTextbox7
			// 
			this->bunifuMetroTextbox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox7->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox7->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox7->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox7->BorderThickness = 3;
			this->bunifuMetroTextbox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox7->isPassword = false;
			this->bunifuMetroTextbox7->Location = System::Drawing::Point(117, 287);
			this->bunifuMetroTextbox7->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox7->Name = L"bunifuMetroTextbox7";
			this->bunifuMetroTextbox7->Size = System::Drawing::Size(281, 44);
			this->bunifuMetroTextbox7->TabIndex = 5;
			this->bunifuMetroTextbox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox6
			// 
			this->bunifuMetroTextbox6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox6->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox6->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox6->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox6->BorderThickness = 3;
			this->bunifuMetroTextbox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox6->isPassword = false;
			this->bunifuMetroTextbox6->Location = System::Drawing::Point(117, 235);
			this->bunifuMetroTextbox6->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox6->Name = L"bunifuMetroTextbox6";
			this->bunifuMetroTextbox6->Size = System::Drawing::Size(281, 44);
			this->bunifuMetroTextbox6->TabIndex = 4;
			this->bunifuMetroTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox5
			// 
			this->bunifuMetroTextbox5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox5->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox5->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox5->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox5->BorderThickness = 3;
			this->bunifuMetroTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox5->isPassword = false;
			this->bunifuMetroTextbox5->Location = System::Drawing::Point(117, 183);
			this->bunifuMetroTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox5->Name = L"bunifuMetroTextbox5";
			this->bunifuMetroTextbox5->Size = System::Drawing::Size(281, 44);
			this->bunifuMetroTextbox5->TabIndex = 3;
			this->bunifuMetroTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox4
			// 
			this->bunifuMetroTextbox4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox4->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox4->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox4->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox4->BorderThickness = 3;
			this->bunifuMetroTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox4->isPassword = false;
			this->bunifuMetroTextbox4->Location = System::Drawing::Point(117, 76);
			this->bunifuMetroTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox4->Name = L"bunifuMetroTextbox4";
			this->bunifuMetroTextbox4->Size = System::Drawing::Size(281, 44);
			this->bunifuMetroTextbox4->TabIndex = 2;
			this->bunifuMetroTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox3
			// 
			this->bunifuMetroTextbox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuMetroTextbox3->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox3->BorderColorIdle = System::Drawing::Color::LightSeaGreen;
			this->bunifuMetroTextbox3->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox3->BorderThickness = 3;
			this->bunifuMetroTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox3->isPassword = false;
			this->bunifuMetroTextbox3->Location = System::Drawing::Point(117, 24);
			this->bunifuMetroTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
			this->bunifuMetroTextbox3->Size = System::Drawing::Size(281, 44);
			this->bunifuMetroTextbox3->TabIndex = 1;
			this->bunifuMetroTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(429, 715);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 471);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->bunifuMetroTextbox2);
			this->Controls->Add(this->bunifuMetroTextbox1);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ pathstr = "";
		String^ email = "";
	private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		try 
		{
			if (bunifuMetroTextbox1->Text == "" ||  bunifuMetroTextbox2->Text == "")
			{
				MessageBox::Show("Fields Must be Fill");
				return;
			}
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=license";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			String^ email = bunifuMetroTextbox1->Text;
			String^ password = bunifuMetroTextbox2->Text;
			int count = 0;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where user_email='" + email + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				count = count + 1;
			}
			if (count == 1)
			{
				MessageBox::Show("You Login Successfully");
				this->Hide();
				MyForm2^ fm2 = gcnew MyForm2();
				fm2->ShowDialog();

			}
			else
			{
				MessageBox::Show("Email or Password is Incorrect");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	panel1->Visible = true;
	/*SignupForm^ sign = gcnew SignupForm();
	this->Hide();
	sign->ShowDialog();*/
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	panel1->Visible = false;
}
private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		if (bunifuMetroTextbox3->Text == "" || bunifuMetroTextbox4->Text == "" || bunifuMetroTextbox5->Text == "" || bunifuMetroTextbox6->Text == "" || bunifuMetroTextbox7->Text == "")
		{
			MessageBox::Show("Fields Must be Fill");
			return;
		}
		if (bunifuMetroTextbox6->Text != bunifuMetroTextbox7->Text)
		{
			MessageBox::Show("Password does not Math");
			return;
		}
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=license";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ fname = bunifuMetroTextbox3->Text;
		String^ lname = bunifuMetroTextbox4->Text;
		email = bunifuMetroTextbox5->Text;
		String^ male = radioButton1->Text;
		String^ female = radioButton2->Text;
		String^ pass = bunifuMetroTextbox6->Text;
		String^ conpass = bunifuMetroTextbox7->Text;
		pathstr = email + ".jpg";
		int count = 0;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where user_email='" + email + "'", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			count = count + 1;
		}
		if (count == 1)
		{
			MessageBox::Show("Try another email address");
		}
		else
		{
			if (radioButton1->Checked)
			{
				con->Close();
				MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into users(user_f_name,user_l_name,user_email,user_gender,	user_pass,user_img) values('" + fname + "','" + lname + "','" + email + "','" + male + "','" + pass + "','" + pathstr + "')", con);
				MySqlDataReader^ dr2;
				con->Open();
				dr2 = cmd2->ExecuteReader();
				MessageBox::Show("You Signup successuflly");
				bunifuMetroTextbox3->Text = "";
				bunifuMetroTextbox4->Text = "";
				bunifuMetroTextbox5->Text = "";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				bunifuMetroTextbox6->Text = "";
				bunifuMetroTextbox7->Text = "";
				panel1->Visible = false;
			}
			else if (radioButton2->Checked)
			{
				con->Close();
				MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into users(user_f_name,user_l_name,user_email,user_gender,	user_pass) values('" + fname + "','" + lname + "','" + email + "','" + female + "','" + pass + "')", con);
				MySqlDataReader^ dr2;
				con->Open();
				dr2 = cmd2->ExecuteReader();
				MessageBox::Show("You Signup successuflly");
				bunifuMetroTextbox3->Text = "";
				bunifuMetroTextbox4->Text = "";
				bunifuMetroTextbox5->Text = "";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				bunifuMetroTextbox6->Text = "";
				bunifuMetroTextbox7->Text = "";
				panel1->Visible = false;
			}
			else
			{
				MessageBox::Show("Please Select Gender");
			}
		}





	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = "C:";
	openFileDialog1->Title = "Select Image";
	openFileDialog1->FileName = "";

	openFileDialog1->Filter = "JPEG Images|*.jpg|GIF Images|*.gif|PNG Images|*.png";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
	{
		MessageBox::Show("cancel");
	}
	else
	{
		//pictureBox3->Image = Image::FromFile(System::IO::Path::Combine("C:\\Users\\Muhammad_Waseem\\Desktop\\New folder\\2.jpg", "2.jpg"));
		pictureBox4->Image = Image::FromFile(openFileDialog1->FileName);
		pictureBox4->Image->Save(System::IO::Path::Combine("C:\\Users\\Muhammad_Waseem\\Desktop\\New folder", email+".jpg"));

	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
