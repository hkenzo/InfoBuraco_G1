//#include "MyForm.h"
#include "Despachador.h"
#include "ServicoComunicacao0.h"
#include "ServicoComunicacao1.h"
#include "ServicoComunicacao2.h"
#include "CadastroFuncionario.h"
#include "login.h"
#include "alterarPrioridade.h"


namespace Project1 {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew alterarPrioridade);
		//Application::Run(gcnew login);
		
	}
}