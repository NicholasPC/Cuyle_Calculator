#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	wxDECLARE_EVENT_TABLE();

public:
	wxTextCtrl* screen = nullptr;
	wxButton* zero = nullptr;
	wxButton* clearScreen = nullptr;
	int* numPad = nullptr;

	int numPX = 3;
	int numPY = 4;
	int* pad = nullptr;


private:
	wxTextCtrl* calculatorBox = nullptr;
};

