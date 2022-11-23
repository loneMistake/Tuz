//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
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
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *qu;
	TDBGrid *t;
	TDataSource *DataSource1;
	TADOConnection *ADOConnection1;
	TImage *Image1;
	TButton *Button1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
