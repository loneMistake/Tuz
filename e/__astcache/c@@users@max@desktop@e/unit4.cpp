//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit5.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
		   Form5->Show();

		   Form4->chek=true;
}
//---------------------------------------------------------------------------




void __fastcall TForm4::Button4Click(TObject *Sender)
{
   Form1->Show();
   Form4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
Form4->chek=false;
Form5->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button2Click(TObject *Sender)
{
Form8->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button5Click(TObject *Sender)
{
                 Form9->Show();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm4::Image5Click(TObject *Sender)
{
Form8->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image4Click(TObject *Sender)
{
Form9->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image3Click(TObject *Sender)
{
Form4->chek=false;
Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image6Click(TObject *Sender)
{
Form4->chek=true;
Form5->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image2Click(TObject *Sender)
{
Form1->Show();
Form4->Close();
}
//---------------------------------------------------------------------------

