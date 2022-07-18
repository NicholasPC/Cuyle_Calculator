#pragma once
#include "wx/wx.h"

class Processor
{
private:
	static Processor* calc;
	Processor() = default;
public:
	static Processor* GetInstance();
	void calculation(wxTextCtrl* screen, unsigned char in, unsigned char out);

	Processor(Processor& other) = delete;
	void operator=(Processor & other) = delete;
};

