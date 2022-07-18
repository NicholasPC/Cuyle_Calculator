#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(296, 390)) {

	
	function = new wxButton * [17];

	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(210, 70), wxTE_READONLY);
	clearScreen = new wxButton(this, 11016, "C", wxPoint(210, 0), wxSize(70, 70));
	function[0] = clearScreen;


	zero = Factory::create1(this);
	one = Factory::create2(this);
	two = Factory::create3(this);
	three = Factory::create4(this);
	four = Factory::create5(this);
	five = Factory::create6(this);
	six = Factory::create7(this);
	seven = Factory::create8(this);
	eight = Factory::create9(this);
	nine = Factory::create10(this);

	mod = Factory::create11(this);
	equals = Factory::create12(this);
	plus = Factory::create13(this);
	minus = Factory::create14(this);
	multiply = Factory::create15(this);
	divide = Factory::create16(this);

	
	

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
		case 10:
			calculator->calculation(screen, mode, mode);
			*screen << "%";
			break;
		case 11:
			calculator->calculation(screen, mode, mode);
			//*screen << "=";
				break;
		case 12:
			calculator->calculation(screen, mode, mode);
			*screen << "+";
			break;
		case 13:
			calculator->calculation(screen, mode, mode);
			*screen << "-";
			break;
		case 14:
			calculator->calculation(screen, mode, mode);
			*screen << "*";
			break;
		case 15:
			calculator->calculation(screen, mode, mode);
			*screen << "/";
			break;
		case 16:
			screen->Clear();
			break;
		}
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

	delete[] function;
}
