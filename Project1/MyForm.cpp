//#include "MyForm.h"
#include "Despachador.h"
#include "ServicoComunicacao0.h"
#include "ServicoComunicacao1.h"
#include "CadastroFuncionario.h"
#include "login.h"
#include "dashboardRegional.h"
#include "Opening.h"


namespace Project1 {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew Opening);
		
	}
}