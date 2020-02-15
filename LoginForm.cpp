#include "LoginForm.h"
#include"SignupForm.h"
#include"splash.h"
#include"MyForm2.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
[STAThreadAttribute]
void main()
{
	System::Windows::Forms::Application::Run(gcnew Project6::LoginForm());
}