#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2JuanSebastianMejia1172819::MyForm form;
	Application::Run(% form);
	return 0;
}
