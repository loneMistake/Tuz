//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cctype>

#include "Unit2.h"
#include "Unit1.h"
char a[69]="qwertyuiopasdfghjklzxcvbnmйцукенгшщзхъфывапролджэячсмитьб0123456789!";
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
void __fastcall TForm2::Button1Click(TObject* Sender)
{
  qu->First();
	bool chek = false;
    bool chek1 = false;
	if (Edit1->Text != "") {


        for (int i = 1; i <= Edit1->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
			{
				if (tolower(Edit1->Text[i]) ==  a[j])
					chek = true;




			}
				if(chek)
				{
				ShowMessage("Был введен неправильный символ");
				chek=false;
				return;
				}
				else{}
		}

	}
	if (Edit2->Text != "") {

        for (int i = 1; i <= Edit2->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit2->Text[i]) == a[j])
					chek = true;

			if(chek)
				{
				ShowMessage("Был введен неправильный символ");
				chek=false;
				return;
				}
		}

	}
	if (Edit3->Text != "") {
	 ShowMessage(3);
        for (int i = 1; i <= Edit3->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit3->Text[i]) == a[j])
					chek = true;

				if(chek)
				{
				ShowMessage("Был введен неправильный символ");
				chek=false;
				return;
				}
		}

    }
	if (Edit4->Text != "") {
     ShowMessage(4);
        for (int i = 1; i <= Edit4->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit4->Text[i]) == a[j])
					chek = true;
				if(chek)
				{
				ShowMessage("Был введен неправильный символ");
				chek=false;
				return;
				}
		}

    }



	while (!qu->Eof) {
		if (qu->Fields->FieldByName("user_login")->AsString == Edit1->Text) {
			chek = false;
		}
		qu->Next();
	}
	if (chek) {
		if (Edit1->Text != "" && Edit2->Text != "") {
           if (Edit1->Text[1] == '!' &&
                Edit1->Text[Edit1->Text.Length()] == '!') {
                qu->Fields->FieldByName("user_type")->AsBoolean = true;
			}  else
			{
			if(Edit3->Text ==""	&&Edit4->Text =="")
			{
			ShowMessage("заполнены не все нужные поля");
            return;
			}
			}
			qu->Insert();

            qu->Fields->FieldByName("user_login")->AsString = Edit1->Text;
            qu->Fields->FieldByName("user_password")->AsString = Edit2->Text;
            qu->Fields->FieldByName("user_type")->AsBoolean = false;



			qu->Post();
            ShowMessage("вы были зарегистрированы");
		}
		else
		{
		ShowMessage("заполнены не все нужные поля");

        return;
		}
	} else {
		ShowMessage(
			"Пользователь с данным логином уже зарегистрирован, пожалуйста введите новый логин");

			return;
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button2Click(TObject *Sender)
{
 Form1->Show();
 Form2->Close();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm2::Image2Click(TObject *Sender)
{
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	Form1->Show();
	Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image3Click(TObject *Sender)
{
qu->First();
	bool chek = false;
	bool chek1 = true;
	if (Edit1->Text != "") {


        for (int i = 1; i <= Edit1->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
			{
				if (tolower(Edit1->Text[i]) ==  tolower(a[j]))
					chek = true;




			}
				if(!chek)
				{
				ShowMessage("Был введен неправильный символ");

				return;
				}
				else
				{
					   chek=false;
				}
		}

	}
	if (Edit2->Text != "") {

		for (int i = 1; i <= Edit2->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit2->Text[i]) == a[j])
					chek = true;

			if(!chek)
				{
				ShowMessage("Был введен неправильный символ");

				return;
				}
				else
				{
				chek=false;
				}
		}

	}
	if (Edit3->Text != "") {

        for (int i = 1; i <= Edit3->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit3->Text[i]) == a[j])
					chek = true;

				if(!chek)
				{
				ShowMessage("Был введен неправильный символ");

				return;
				}
				else
				{
				chek=false;
				}
		}

    }
	if (Edit4->Text != "") {

        for (int i = 1; i <= Edit4->Text.Length(); i++) {
			for (int j = 0; j < 69; j++)
				if (tolower(Edit4->Text[i]) == a[j])
					chek = true;
				if(!chek)
				{
				ShowMessage("Был введен неправильный символ");

				return;
				}
				else
				{
                chek=false;
				}
		}

    }



	while (!qu->Eof) {
		if (qu->Fields->FieldByName("user_login")->AsString == Edit1->Text) {
			chek1 = false;
		}
		qu->Next();
	}
	if (chek1) {

		if (Edit1->Text != "" && Edit2->Text != "") {
		   if (Edit1->Text[1] == '!' &&
				Edit1->Text[Edit1->Text.Length()] == '!') {




			}  else
			{
			if(Edit3->Text ==""	&&Edit4->Text =="")
			{
			ShowMessage("заполнены не все нужные поля");
            return;
			}
			}


			qu->Insert();

            qu->Fields->FieldByName("user_login")->AsString = Edit1->Text;
			qu->Fields->FieldByName("user_password")->AsString = Edit2->Text;

            if (Edit1->Text[1] == '!' &&
				Edit1->Text[Edit1->Text.Length()] == '!') {

					 qu->Fields->FieldByName("user_type")->AsBoolean = true;


			}  else
			qu->Fields->FieldByName("user_type")->AsBoolean = false;



			qu->Post();

            ShowMessage("вы были зарегистрированы");
		}
		else
		{
		ShowMessage("заполнены не все нужные поля");

        return;
		}
	} else {
		ShowMessage(
			"Пользователь с данным логином уже зарегистрирован, пожалуйста введите новый логин");

			return;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
    Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
}
//---------------------------------------------------------------------------

