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
		 DBGrid1->Columns->Items[1]->Width=124;
DBGrid1->Columns->Items[2]->Width=124;
DBGrid1->Columns->Items[3]->Width=124;
DBGrid1->Columns->Items[4]->Width=124;
}
else
{
  qu->Active=false;
	   qu->SQL->Text="select *from cosm where sel=false and type=true;" ;
	   qu->Active=true;
		 DBGrid1->Columns->Items[1]->Width=124;
DBGrid1->Columns->Items[2]->Width=124;
DBGrid1->Columns->Items[3]->Width=124;
DBGrid1->Columns->Items[4]->Width=124;
}

}
//---------------------------------------------------------------------------



void __fastcall TForm5::Button2Click(TObject *Sender)
{
Form4->Show();
Form5->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image5Click(TObject *Sender)
{

if(Edit1->Text!="")
{
qu->First();
while(!qu->Eof)
{
if(Edit1->Text==qu->FieldByName("code")->AsString)
{

		  qu1->Insert();
		  qu1->FieldByName("user_name")->AsString=Form4->user1;
		  qu1->FieldByName("doc")->AsString=qu->FieldByName("doct")->AsString;
		   qu1->FieldByName("data")->AsString= qu->FieldByName("data")->AsString ;

			qu1->Post();
			// qu->Active=false;
				  qu->Edit();
					  //ShowMessage("UPDATE cosm set sel=true where code ="+Edit1->Text+"; "+" select *from cosm where sel=false;") ;
		  // qu->SQL->Clear();
				 qu->FieldByName("sel")->AsBoolean=true;
		   //	qu->SQL->Add("UPDATE cosm set sel=true where code ="+Edit1->Text+";") ;
		   //	qu->ExecSQL();

			// qu->SQL->Text="UPDATE cosm set sel=true where code ="+Edit1->Text+";"+"select *from cosm where sel=false;";

		   //	qu->SQL->Clear();
		   //	qu->SQL->Add("select *from cosm where sel=false;") ;

		   //	qu->SQL->Text="select *from cosm where sel=false;";

		   //	qu->Active=true;

		   qu->Post() ;
if(Form4->chek)
{
qu->Active=false;
qu->SQL->Text="select *from cosm where sel=False and type=False" ;
qu->Active=true;
	ShowMessage("�� ���� ��������");
			break;

			  }
}                else
{
qu->Active=false;
qu->SQL->Text="select *from cosm where sel=False and type=True" ;
qu->Active=true;
 ShowMessage("�� ���� ��������");
break;
}
	 qu->Next();
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image2Click(TObject *Sender)
{
Edit1->Clear();
Form4->Show();
Form5->Close();
}
//---------------------------------------------------------------------------

