//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
char a[26]="@#$%^&*()_+=-/?.[] �:?,";
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
    bool chek = true;
    bool chek1 = true;
    if (Edit1->Text != "") {
        for (int i = 1; i <= Edit1->Text.Length(); i++) {
            for (int j = 0; j < 26; j++)
                if (Edit1->Text[i] == a[j])
                    chek1 = false;
        }
    }
    if (Edit2->Text != "") {
        for (int i = 1; i <= Edit2->Text.Length(); i++) {
            for (int j = 0; j < 26; j++)
                if (Edit2->Text[i] == a[j])
                    chek1 = false;
        }
    }
    if (Edit3->Text != "") {
        for (int i = 1; i <= Edit3->Text.Length(); i++) {
            for (int j = 0; j < 26; j++)
                if (Edit3->Text[i] == a[j])
                    chek1 = false;
        }
    }
    if (Edit4->Text != "") {
        for (int i = 1; i <= Edit4->Text.Length(); i++) {
            for (int j = 0; j < 26; j++)
                if (Edit4->Text[i] == a[j])
                    chek1 = false;
        }
    }

    if (!chek1) {
        ShowMessage("��� ������ ����������� ������");
        return;
    }

    while (!qu->Eof) {
        if (qu->Fields->FieldByName("user_login")->AsString == Edit1->Text) {
            chek = false;
        }
        qu->Next();
    }
    if (chek) {
        if (Edit1->Text != "" && Edit2->Text != "") {
            qu->Insert();
            qu->Fields->FieldByName("user_login")->AsString = Edit1->Text;
            qu->Fields->FieldByName("user_password")->AsString = Edit2->Text;
            qu->Fields->FieldByName("user_type")->AsBoolean = false;

            if (Edit1->Text[1] == '!' &&
                Edit1->Text[Edit1->Text.Length()] == '!') {
                qu->Fields->FieldByName("user_type")->AsBoolean = true;
			}  else
			{
			if(Edit3->Text ==""	&&Edit4->Text =="")
			{
			ShowMessage("��������� �� ��� ������ ����");
			}
			}

			qu->Post();
            ShowMessage("�� ���� ����������������");
		}
		else
		{
        ShowMessage("��������� �� ��� ������ ����");
		}
    } else {
		ShowMessage(
			"������������ � ������ ������� ��� ���������������, ���������� ������� ����� �����");
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button2Click(TObject *Sender)
{
 Form1->Show();
 Form2->Close();
}
//---------------------------------------------------------------------------


