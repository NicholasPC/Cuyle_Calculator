#pragma once
#include "wx/wx.h"

class Processor
{
public:
	static Processor &GetInstance();
	void calculation(wxTextCtrl* screen, unsigned char in, unsigned char out);
};

