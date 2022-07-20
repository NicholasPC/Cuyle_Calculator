#pragma once
#include "wx/wx.h"
#include "Factory.h"
#include "Processor.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	wxDECLARE_EVENT_TABLE();
	void ButtonClicked(wxCommandEvent& evt);

public:
	wxButton* clearScreen = nullptr;

	wxTextCtrl* screen = nullptr;

	wxButton* zero = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;

	wxButton* a = nullptr;
	wxButton* b = nullptr;
	wxButton* c = nullptr;
	wxButton* d = nullptr;
	wxButton* e = nullptr;
	wxButton* f = nullptr;
	
	wxButton* mod = nullptr;
	wxButton* equals = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;

	wxButton* decMode = nullptr;
	wxButton* hexMode = nullptr;
	wxButton* binMode = nullptr;

	wxButton** function;

	unsigned char mode = 10;
	Processor* calculator;



private:
	wxTextCtrl* calculatorBox = nullptr;
};

