#pragma once
#include "wx/wx.h"

class Factory {
public:
	 static wxButton* create0(wxWindow* frame);
	 static wxButton* create1(wxWindow* frame);
	 static wxButton* create2(wxWindow* frame);
	 static wxButton* create3(wxWindow* frame);
	 static wxButton* create4(wxWindow* frame);
	 static wxButton* create5(wxWindow* frame);
	 static wxButton* create6(wxWindow* frame);
	 static wxButton* create7(wxWindow* frame);
	 static wxButton* create8(wxWindow* frame);
	 static wxButton* create9(wxWindow* frame);
	 static wxButton* createMod(wxWindow* frame);
	 static wxButton* createEqual(wxWindow* frame);
	 static wxButton* createPlus(wxWindow* frame);
	 static wxButton* createMinus(wxWindow* frame);
	 static wxButton* createMult(wxWindow* frame);
	 static wxButton* createDiv(wxWindow* frame);

	 static wxButton* createDecMode(wxWindow* frame);
	 static wxButton* createHexMode(wxWindow* frame);
	 static wxButton* createBinMode(wxWindow* frame);

	 static wxButton* createClear(wxWindow* frame);

	 static wxButton* createA(wxWindow* frame);
	 static wxButton* createB(wxWindow* frame);
	 static wxButton* createC(wxWindow* frame);
	 static wxButton* createD(wxWindow* frame);
	 static wxButton* createE(wxWindow* frame);
	 static wxButton* createF(wxWindow* frame);
};

