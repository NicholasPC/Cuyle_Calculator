#include "Factory.h"
#include "wx/wx.h"


wxButton* Factory::create0(wxWindow* frame) {return new wxButton(frame, 11000, "0", wxPoint(0, 280), wxSize(140, 70));}
wxButton* Factory::create1(wxWindow* frame) {return new wxButton(frame, 11001, "1", wxPoint(0, 210), wxSize(70, 70));}
wxButton* Factory::create2(wxWindow* frame) {return new wxButton(frame, 11002, "2", wxPoint(70, 210), wxSize(70, 70));}
wxButton* Factory::create3(wxWindow* frame) {return new wxButton(frame, 11003, "3", wxPoint(140, 210), wxSize(70, 70));}
wxButton* Factory::create4(wxWindow* frame) {return new wxButton(frame, 11004, "4", wxPoint(0, 140), wxSize(70, 70));}
wxButton* Factory::create5(wxWindow* frame) {return new wxButton(frame, 11005, "5", wxPoint(70, 140), wxSize(70, 70));}
wxButton* Factory::create6(wxWindow* frame) {return new wxButton(frame, 11006, "6", wxPoint(140, 140), wxSize(70, 70));}
wxButton* Factory::create7(wxWindow* frame) {return new wxButton(frame, 11007, "7", wxPoint(0, 70), wxSize(70, 70));}
wxButton* Factory::create8(wxWindow* frame) {return new wxButton(frame, 11008, "8", wxPoint(70, 70), wxSize(70, 70));}
wxButton* Factory::create9(wxWindow* frame) {return new wxButton(frame, 11009, "9", wxPoint(140, 70), wxSize(70, 70));}

wxButton* Factory::createA(wxWindow* frame) { return new wxButton(frame, 11010, "A", wxPoint(350, 70), wxSize(70, 70)); }
wxButton* Factory::createB(wxWindow* frame) { return new wxButton(frame, 11011, "B", wxPoint(420, 70), wxSize(70, 70)); }
wxButton* Factory::createC(wxWindow* frame) { return new wxButton(frame, 11012, "C", wxPoint(350, 140), wxSize(70, 70)); }
wxButton* Factory::createD(wxWindow* frame) { return new wxButton(frame, 11013, "D", wxPoint(420, 140), wxSize(70, 70)); }
wxButton* Factory::createE(wxWindow* frame) { return new wxButton(frame, 11014, "E", wxPoint(350, 210), wxSize(70, 70)); }
wxButton* Factory::createF(wxWindow* frame) { return new wxButton(frame, 11015, "F", wxPoint(420, 210), wxSize(70, 70)); }

wxButton* Factory::createPlus(wxWindow* frame) {return new wxButton(frame, 11016, "+", wxPoint(210, 70), wxSize(70, 70));}
wxButton* Factory::createMinus(wxWindow* frame) {return new wxButton(frame, 11017, "-", wxPoint(210, 140), wxSize(70, 70));}
wxButton* Factory::createMult(wxWindow* frame) {return new wxButton(frame, 11018, "*", wxPoint(210, 210), wxSize(70, 70));}
wxButton* Factory::createDiv(wxWindow* frame) {return new wxButton(frame, 11019, "/", wxPoint(210, 280), wxSize(70, 70));}
wxButton* Factory::createMod(wxWindow* frame) {return new wxButton(frame, 11020, "%", wxPoint(140, 280), wxSize(70, 70));}

wxButton* Factory::createEqual(wxWindow* frame) {return new wxButton(frame, 11021, "=", wxPoint(350, 280), wxSize(140, 70));}

wxButton* Factory::createDecMode(wxWindow* frame) {return new wxButton(frame, 11022, "Dec", wxPoint(280, 70), wxSize(70, 70));}
wxButton* Factory::createHexMode(wxWindow* frame) {return new wxButton(frame, 11023, "Hex", wxPoint(280, 140), wxSize(70, 70));}
wxButton* Factory::createBinMode(wxWindow* frame) {return new wxButton(frame, 11024, "Bin", wxPoint(280, 210), wxSize(70, 70));}

wxButton* Factory::createClear(wxWindow* frame) {return new wxButton(frame, 11025, "Clr", wxPoint(280, 280), wxSize(70, 70));}













