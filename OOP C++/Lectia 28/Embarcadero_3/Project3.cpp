//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Project3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

 proces *X;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StartClick(TObject *Sender)
{
	X = new proces(true);

	X->Priority = tpTimeCritical;

	X->Start();

	Start->Enabled = false;

	Stop->Enabled = true;

  /*
	tpIdle
	tpLowest
	tpLower
	tpNormal
	tpHigher
	tpHighest
	tpTimeCritical
  */

}
//---------------------------------------------------------------------------

void __fastcall TForm1::StopClick(TObject *Sender)
{
	X->Terminate();

	Start->Enabled = true;

	Stop->Enabled = false;
}
//---------------------------------------------------------------------------

