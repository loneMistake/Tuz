//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TForm7::Button1Click(TObject *Sender)
{
qu->Active=false;
qu->SQL->Text="select *from cosm" ;
qu->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
qu->Active=false;
		qu->SQL->Text="select *from users" ;
		qu->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button3Click(TObject *Sender)
{
qu->Active=false;
	qu->SQL->Text="select *from zap" ;
	qu->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button4Click(TObject *Sender)
{
qu->Active=false;
	   qu->SQL->Text="select *from doctors" ;
	   qu->Active=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm7::Button5Click(TObject *Sender)
{
	  Form1->Show();
	  Form7->Close();

}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormActivate(TObject *Sender)
{
  t->Columns->Items[0]->Width=164;
t->Columns->Items[1]->Width=200;
t->Columns->Items[2]->Width=200;
t->Columns->Items[3]->Width=200;
t->Columns->Items[4]->Width=200;
t->Columns->Items[5]->Width=200;
}
//---------------------------------------------------------------------------

