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
