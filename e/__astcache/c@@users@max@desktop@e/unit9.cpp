﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormCreate(TObject *Sender)
{
DBGrid1->Columns->Items[0]->Width=164;
DBGrid1->Columns->Items[1]->Width=200;
DBGrid1->Columns->Items[2]->Width=200;
DBGrid1->Columns->Items[3]->Width=200;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
Form4->Show();
Form9->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormActivate(TObject *Sender)
{
DBGrid1->Columns->Items[0]->Width=164;
DBGrid1->Columns->Items[1]->Width=200;
DBGrid1->Columns->Items[2]->Width=64;
DBGrid1->Columns->Items[3]->Width=200;

ADOQuery1->Active =false;
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add( "select *from zap where user_name='"+Form4->user1+"'");

 ADOQuery1->Active =true;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Image2Click(TObject *Sender)
{
Form4->Show();
Form9->Close();
}
//---------------------------------------------------------------------------

