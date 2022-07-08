#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	wxDECLARE_EVENT_TABLE();
	void ButtonClicked(wxCommandEvent& evt);

public:
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
	
	wxButton* clearScreen = nullptr;
	wxButton* mod = nullptr;
	wxButton* equals = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;

	wxButton** function;



private:
	wxTextCtrl* calculatorBox = nullptr;
};

