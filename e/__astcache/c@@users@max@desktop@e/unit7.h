//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOQuery *qu;
	TDataSource *DataSource1;
	TDBGrid *t;
	TDBNavigator *DBNavigator1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TImage *Image1;
	TButton *Button5;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *str;
	TImage *Image9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
