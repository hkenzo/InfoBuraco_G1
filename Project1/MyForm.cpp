//#include "MyForm.h"
#include "Despachador.h"
#include "ServicoComunicacao0.h"

namespace Project1 {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew Despachador);
		
	}
}