#include "MyForm.h"
#include <Windows.h>
using namespace LR33CalculatorArtemievDenisRis191b;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


