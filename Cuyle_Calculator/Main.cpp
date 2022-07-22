#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(507, 390)) {

	
	function = new wxButton * [26];

	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(490, 70), wxTE_READONLY);


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

	clearScreen = Factory::createClear(this);
	
	

	function[0] = zero;
	function[1] = one;
	function[2] = two;
	function[3] = three;
	function[4] = four;
	function[5] = five;
	function[6] = six;
	function[7] = seven;
	function[8] = eight;
	function[9] = nine;

	function[10] = a;
	function[11] = b;
	function[12] = c;
	function[13] = d;
	function[14] = e;
	function[15] = f;

	function[16] = plus;
	function[17] = minus;
	function[18] = multiply;
	function[19] = divide;
	function[20] = mod;

	function[21] = equals;

	function[22] = decMode;
	function[23] = hexMode;
	function[24] = binMode;

	function[25] = clearScreen;

	for (int i = 0; i < 26; i++) {
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
		case 25:
			screen->Clear();
			*screen << "";
			break;
		case 8:
		case 9:
			if (mode == 2 || mode == 8)
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
			calculator->calculation(screen, mode, mode);
			break;
		
		case 22:
			calculator->calculation(screen, mode, 10);
			mode = 10;
			break;

		case 23:
			calculator->calculation(screen, mode, 16);
			mode = 16;
			break;

		case 24:
			calculator->calculation(screen, mode, 2);
			mode = 2;
			break;

		}

		if (screen->GetLineText(0).ToStdString() == "")
			*screen << "";
	}
}

Main::~Main() {
	delete screen;

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

	delete a;
	delete b;
	delete c;
	delete d;
	delete e;
	delete f;

	delete plus;
	delete minus;
	delete multiply;
	delete divide;
	delete mod;

	delete equals;


	delete decMode;
	delete hexMode;
	delete binMode;

	delete clearScreen;

	delete[] function;
}
