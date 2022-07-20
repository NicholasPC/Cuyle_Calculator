#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(507, 390)) {

	
	function = new wxButton * [17];

	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(490, 70), wxTE_READONLY);
	clearScreen = Factory::createClear(this);
	function[0] = clearScreen;


	zero = Factory::create0(this);
	one = Factory::create1(this);
	two = Factory::create2(this);
	three = Factory::create3(this);
	four = Factory::create4(this);
	five = Factory::create5(this);
	six = Factory::create6(this);
	seven = Factory::create7(this);
	eight = Factory::create8(this);
	nine = Factory::create9(this);

	a = Factory::createA(this);
	b = Factory::createB(this);
	c = Factory::createC(this);
	d = Factory::createD(this);
	e = Factory::createE(this);
	f = Factory::createF(this);

	mod = Factory::createMod(this);
	equals = Factory::createEqual(this);
	plus = Factory::createPlus(this);
	minus = Factory::createMinus(this);
	multiply = Factory::createMult(this);
	divide = Factory::createDiv(this);

	decMode = Factory::createDecMode(this);
	hexMode = Factory::createHexMode(this);
	binMode = Factory::createBinMode(this);

	
	

	function[1] = zero;
	function[2] = one;
	function[3] = two;
	function[4] = three;
	function[5] = four;
	function[6] = five;
	function[7] = six;
	function[8] = seven;
	function[9] = eight;
	function[10] = nine;

	function[11] = mod;
	function[12] = equals;
	function[13] = plus;
	function[14] = minus;
	function[15] = multiply;
	function[16] = divide;

	for (int i = 0; i < 17; i++) {
		function[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::ButtonClicked, this);
	}

}

void Main::ButtonClicked(wxCommandEvent& evt) {
	int temp = evt.GetId() - 11000;
	if (temp >= 0 && temp < 10) {
		*screen << temp;
	}
	else {
		switch (temp) {
		case 8:
		case 9:
			if (mode == 2 || mode == 8);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (mode == 2)
				break;
		case 0:
		case 1:
			*screen << temp;
			break;
		case 10:
		case 11:
			calculator->calculation(screen, mode, mode);
		case 12:
		case 13:
		case 14:
		case 15:
			if (mode == 16)
				*screen << (char)('A' + (temp - 10));
			break;
		case 16:
			calculator->calculation(screen, mode, mode);
			*screen << "+";
			break;
		case 17:
			calculator->calculation(screen, mode, mode);
			if (screen->GetLineText(0).ToStdString() == "0")
				screen->Clear();

			*screen << "-";
			break;
		case 18:
			calculator->calculation(screen, mode, mode);
			*screen << "*";
			break;
		case 19:
			calculator->calculation(screen, mode, mode);
			*screen << "/";
			break;
		case 20:
			calculator->calculation(screen, mode, mode);
			*screen << "%";
			break;
		case 21:
			screen->Clear();
			*screen << "";
			break;
		case 22:
			calculator->calculation(screen, mode, 16);
			break;
		case 23:
			calculator->calculation(screen, mode, 2);
			mode = 2;
			break;
		case 24:
			calculator->calculation(screen, mode, 8);
			mode = 8;
			break;
		case 25:
			calculator->calculation(screen, mode, 10);
			mode = 10;
			break;
		case 26:
			calculator->calculation(screen, mode, 16);
			mode = 16;
			break;
		}

		if (screen->GetLineText(0).ToStdString() == "")
			*screen << "";
	}
}

Main::~Main() {
	delete screen;
	delete clearScreen;
	delete zero;
	delete one;
	delete two;
	delete three;
	delete four;
	delete five;
	delete six;
	delete seven;
	delete eight;
	delete nine;
	delete mod;
	delete equals;
	delete plus;
	delete minus;
	delete multiply;
	delete divide;
	delete decMode;
	delete hexMode;
	delete binMode;
	delete a;
	delete b;
	delete c;
	delete d;
	delete e;
	delete f;

	delete[] function;
}
