#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

//просто запускает форму
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Pyatnashki::MainWindow form;
	Application::Run(% form);
}