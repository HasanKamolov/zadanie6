//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
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
	double num1;
	double num2;
	if(TryStrToFloat(Edit1->Text, num1) && TryStrToFloat(Edit2->Text, num2)){

	Edit3->Text = num1+num2;
	}
	else{
		ShowMessage("Введено неверное значение");
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
	double num1;
	double num2;
	if(TryStrToFloat(Edit1->Text, num1) && TryStrToFloat(Edit2->Text, num2)){
	if(num2!=0){
	Edit3->Text = num1/num2;
	}
	else{
		ShowMessage("На ноль делить нельзя!");
    }
	}
	else{
		ShowMessage("Введено неверное значение");
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	double num1;
	double num2;
	if(TryStrToFloat(Edit1->Text, num1) && TryStrToFloat(Edit2->Text, num2)){

	Edit3->Text = num1-num2;
	}
	else{
		ShowMessage("Введено неверное значение");
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button6Click(TObject *Sender)
{
	double num1;
	double num2;
	if(TryStrToFloat(Edit1->Text, num1) && TryStrToFloat(Edit2->Text, num2)){

	Edit3->Text = num1*num2;
	}
	else{
		ShowMessage("Введено неверное значение");
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
	double num1;
	double num2;
	if(TryStrToFloat(Edit1->Text, num1) && TryStrToFloat(Edit2->Text, num2)){

	Edit3->Text = (num1/num2)*100;
	}
	else{
		ShowMessage("Введено неверное значение");
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button7Click(TObject *Sender)
{
  Form3->Show();
}
//---------------------------------------------------------------------------
