//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include <math.h>
#include <Math.hpp>
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
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = sin(DegToRad((double)num));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = cos(DegToRad((double)num));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = tan(DegToRad((double)num));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = cos(DegToRad((double)num))/sin(DegToRad((double)num));
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button5Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = asin(num);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button6Click(TObject *Sender)
{
	double num;
	if(TryStrToFloat(Edit1->Text, num)){
		Edit2->Text = acos(num);
	}
}
//---------------------------------------------------------------------------
