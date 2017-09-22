#include "MainForm.h"

using namespace CP_Air;
using namespace CP_Air::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CP_Air::MainForm form;
	Application::Run(%form);
}