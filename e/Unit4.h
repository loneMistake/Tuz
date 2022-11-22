//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>


//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button5;
	TButton *Button4;
	TImage *Image2;
	TImage *Image1;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
	AnsiString user1;
    bool chek;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
