#include "usuario.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int sub(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2JuanSebastianMejia1172819::usuario form;
	Application::Run(% form);
	return 0;
}
