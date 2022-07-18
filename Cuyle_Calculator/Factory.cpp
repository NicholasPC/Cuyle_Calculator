#include "Factory.h"
#include "wx/wx.h"


wxButton* Factory::create1(wxWindow* frame) {return new wxButton(frame, 11000, "0", wxPoint(70, 280), wxSize(70, 70));}
wxButton* Factory::create2(wxWindow* frame) {return new wxButton(frame, 11001, "1", wxPoint(0, 210), wxSize(70, 70));}
wxButton* Factory::create3(wxWindow* frame) {return new wxButton(frame, 11002, "2", wxPoint(70, 210), wxSize(70, 70));}
wxButton* Factory::create4(wxWindow* frame) {return new wxButton(frame, 11003, "3", wxPoint(140, 210), wxSize(70, 70));}
wxButton* Factory::create5(wxWindow* frame) {return new wxButton(frame, 11004, "4", wxPoint(0, 140), wxSize(70, 70));}
wxButton* Factory::create6(wxWindow* frame) {return new wxButton(frame, 11005, "5", wxPoint(70, 140), wxSize(70, 70));}
wxButton* Factory::create7(wxWindow* frame) {return new wxButton(frame, 11006, "6", wxPoint(140, 140), wxSize(70, 70));}
wxButton* Factory::create8(wxWindow* frame) {return new wxButton(frame, 11007, "7", wxPoint(0, 70), wxSize(70, 70));}
wxButton* Factory::create9(wxWindow* frame) {return new wxButton(frame, 11008, "8", wxPoint(70, 70), wxSize(70, 70));}
wxButton* Factory::create10(wxWindow* frame) {return new wxButton(frame, 11009, "9", wxPoint(140, 70), wxSize(70, 70));}
wxButton* Factory::create11(wxWindow* frame) {return new wxButton(frame, 11010, "%", wxPoint(0, 280), wxSize(70, 70));}
wxButton* Factory::create12(wxWindow* frame) {return new wxButton(frame, 11011, "=", wxPoint(140, 280), wxSize(70, 70));}
wxButton* Factory::create13(wxWindow* frame) {return new wxButton(frame, 11012, "+", wxPoint(210, 70), wxSize(70, 70));}
wxButton* Factory::create14(wxWindow* frame) {return new wxButton(frame, 11013, "-", wxPoint(210, 140), wxSize(70, 70));}
wxButton* Factory::create15(wxWindow* frame) {return new wxButton(frame, 11014, "*", wxPoint(210, 210), wxSize(70, 70));}
wxButton* Factory::create16(wxWindow* frame) {return new wxButton(frame, 11015, "/", wxPoint(210, 280), wxSize(70, 70));}

//wxButton* Factory::makeButton(wxFrame* frame, std::string name) {return new wxButton(frame, ) }

//wxButton** Factory::makeButton(wxFrame* frame){}













