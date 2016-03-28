#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void WinMain() {
	System::Windows::Forms::Control::CheckForIllegalCrossThreadCalls = false;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WinForms::MyForm form;
	Application::Run(%form);
}

Int16 WinForms::MyForm::GetMask(int bit)
{
	return Int16(4095<<bit);
}
