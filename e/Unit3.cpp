//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include <fstream>
char a[26]="@#$%^&*()_+=-/?.[] �:?,";
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject* Sender)
{
    ADOConnection1->Connected = false;

    ADOConnection1->Connected = true;
    qu->Active = true;
    bool chek1 = true;
    if (Edit1->Text != "") {
        for (int i = 1; i <= Edit1->Text.Length(); i++) {
            for (int j = 0; j < 26; j++)
                if (Edit1->Text[i] == a[j])
                    chek1 = false;
        }
    }
    if (!chek1) {
        ShowMessage("��� ������ ����������� ������");
        return;
    }
    if (Edit1->Text != "" && Edit2->Text != "") {
        qu->First();
        while (!qu->Eof) {
			if (qu->Fields->FieldByName("user_login")->AsString == Edit1->Text && qu->FieldByName("user_password")->AsString == Edit2->Text)
            {
                if (qu->Fields->FieldByName("user_type")->AsBoolean) {
					Form7->Show();
                    Form3->Close();
					return;

				} else {
                    Form4->Show();
					Form4->user1 = qu->Fields->FieldByName("user_login")->AsString;
					Form3->Close();

					return;
                }
			}
            qu->Next();
        }

        ShowMessage("������ �������� ����� ���� ������");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button2Click(TObject *Sender)
{
 Form1->Show();
 Form3->Close();

}
//---------------------------------------------------------------------------


