//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
if(Edit1->Text!="")
{
while(!qu->Eof)
{
if(Edit1->Text==qu->FieldByName("code")->AsString)
{

		  qu1->Insert();
		  qu1->FieldByName("user_name")->AsString=Form4->user1;
		  qu1->FieldByName("doc")->AsString=qu->FieldByName("doct")->AsString;
		   qu1->FieldByName("data")->AsString= qu->FieldByName("data")->AsString ;
			qu1->Post();
			 qu->Active=false;
			 qu->SQL->Text="UPDATE cosm set sel=true where code ="+Edit1->Text;
					   qu->Active=true;
					   qu->Active=false;
			qu->SQL->Text="select *from cosm where sel=false;";

			qu->Active=true;
				 qu->Post() ;

			break;
}
	 qu->Next();
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender)
{
if(Form4->chek)
{
qu->Active=false;
	   qu->SQL->Text="select *from cosm where sel=false and type=false;" ;
	   qu->Active=true;
       	 DBGrid1->Columns->Items[1]->Width=64;
DBGrid1->Columns->Items[2]->Width=64;
DBGrid1->Columns->Items[3]->Width=64;
DBGrid1->Columns->Items[4]->Width=64;
}
else
{
  qu->Active=false;
	   qu->SQL->Text="select *from cosm where sel=false and type=true;" ;
	   qu->Active=true;
       	 DBGrid1->Columns->Items[1]->Width=64;
DBGrid1->Columns->Items[2]->Width=64;
DBGrid1->Columns->Items[3]->Width=64;
DBGrid1->Columns->Items[4]->Width=64;
}

}
//---------------------------------------------------------------------------



void __fastcall TForm5::Button2Click(TObject *Sender)
{
Form4->Show();
Form5->Close();
}
//---------------------------------------------------------------------------

