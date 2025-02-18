//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Project3.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall proces::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall proces::proces(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall proces::Execute()
{
    // this->FreeOnTerminate = true;
	
	Form1->Memo1->Clear();

	for( int i=0; i<5000; i++)
	{
		Form1->Memo1->Lines->Add(" - linia " + IntToStr(i));

		if (this->Terminated) break;
	}

	Form1->Start->Enabled = true;

	Form1->Stop->Enabled = false;

}
//---------------------------------------------------------------------------
