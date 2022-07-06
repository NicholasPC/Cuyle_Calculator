#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	wxDECLARE_EVENT_TABLE();

private:
	wxTextCtrl* calculatorBox = nullptr;
};

