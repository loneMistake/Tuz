//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
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
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOQuery *qu;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TButton *Button1;
	TEdit *Edit1;
	TADOQuery *qu1;
	TImage *Image1;
	TButton *Button2;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
    AnsiString user;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
