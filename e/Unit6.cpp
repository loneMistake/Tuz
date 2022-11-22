//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit4.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	  Form4->Show();
      Form6->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button2Click(TObject *Sender)
{
 Form8->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm6::FormActivate(TObject *Sender)
{
  t->Columns->Items[0]->Width=164;
t->Columns->Items[1]->Width=200;
t->Columns->Items[2]->Width=200;

}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2Click(TObject *Sender)
{
 Form4->Show();
      Form6->Close();
}
//---------------------------------------------------------------------------

