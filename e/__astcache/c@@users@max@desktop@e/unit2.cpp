﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
							 bool chek=true;
						  while(!qu->Eof)
						  {
								   if(qu->Fields->FieldByName("user_login")->AsString==Edit1->Text)
								   {
								   chek=false;
								   }
                                   qu->Next();
						  }
						  if(chek) {
				   if(Edit1->Text!="" && Edit2->Text!=""	)
				   {
				   qu->Insert();
				   qu->Fields->FieldByName("user_login")->AsString=Edit1->Text;
				   qu->Fields->FieldByName("user_password")->AsString=Edit2->Text;
				   qu->Fields->FieldByName("user_type")->AsBoolean=false;

					if(Edit1->Text[1] =='!'&& Edit1->Text[ Edit1->Text.Length() ]=='!')
					{
					   qu->Fields->FieldByName("user_type")->AsBoolean=true;
					}

						 qu->Post();
				   }       }
				   else
				   {
				   ShowMessage("Пользователь с данным логином уже зарегистрирован, пожалуйста введите новый логин");
				   }
{}
}
//---------------------------------------------------------------------------

