#include "Graph.h"
#include "Pendulum.cpp"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ExternallyForcedFroudePendulum::MainForm form;
	Application::Run(%form);
}