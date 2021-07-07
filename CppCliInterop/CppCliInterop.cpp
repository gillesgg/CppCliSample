#include "pch.h"
#include <msclr\auto_gcroot.h>
#include "CppCliInterop.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ManageLibraryWPF;

class CppCliManagedState
{
public:
	//msclr::auto_gcroot<Form1^> pForm1;
	msclr::auto_gcroot< ManageLib^> pManageLib;
	

};

CppCliInterop::CppCliInterop()
{
	_managedState = new CppCliManagedState();
	_managedState->pManageLib = gcnew ManageLib();
}

CppCliInterop::~CppCliInterop()
{
	delete _managedState;
}

void CppCliInterop::ShowForm()
{
	_managedState->pManageLib->ShowWindow();
}

void CppCliInterop::SetMessage(wchar_t* message)
{
	_managedState->pManageLib->SendMessage(gcnew String(message));

	//_managedState->pForm1->SetMessageText(gcnew String(message));
}
