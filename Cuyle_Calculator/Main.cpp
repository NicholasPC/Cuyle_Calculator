#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(296, 390)) {

	
	function = new wxButton * [17];

	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(210, 70), wxTE_READONLY);
	clearScreen = new wxButton(this, 11016, "C", wxPoint(210, 0), wxSize(70, 70));
	function[0] = clearScreen;


	/*zero = new wxButton(this, 11000, "0", wxPoint(70, 280), wxSize(70, 70));
	one = new wxButton(this, 11001, "1", wxPoint(0, 210), wxSize(70, 70));
	two = new wxButton(this, 11002, "2", wxPoint(70, 210), wxSize(70, 70));
	three = new wxButton(this, 11003, "3", wxPoint(140, 210), wxSize(70, 70));
	four = new wxButton(this, 11004, "4", wxPoint(0, 140), wxSize(70, 70));
	five = new wxButton(this, 11005, "5", wxPoint(70, 140), wxSize(70, 70));
	six = new wxButton(this, 11006, "6", wxPoint(140, 140), wxSize(70, 70));
	seven = new wxButton(this, 11007, "7", wxPoint(0, 70), wxSize(70, 70));
	eight = new wxButton(this, 11008, "8", wxPoint(70, 70), wxSize(70, 70));
	nine = new wxButton(this, 11009, "9", wxPoint(140, 70), wxSize(70, 70));*/


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

	/*mod = new wxButton(this, 11010, "%", wxPoint(0, 280), wxSize(70, 70));
	equals = new wxButton(this, 11011, "=", wxPoint(140, 280), wxSize(70, 70));
	plus = new wxButton(this, 11012, "+", wxPoint(210, 70), wxSize(70, 70));
	minus = new wxButton(this, 11013, "-", wxPoint(210, 140), wxSize(70, 70));
	multiply = new wxButton(this, 11014, "*", wxPoint(210, 210), wxSize(70, 70));
	divide = new wxButton(this, 11015, "/", wxPoint(210, 280), wxSize(70, 70));*/
	
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
			*screen << "%";
			break;
		case 11:
			*screen << "=";
				break;
		case 12:
			*screen << "+";
			break;
		case 13:
			*screen << "-";
			break;
		case 14:
			*screen << "*";
			break;
		case 15:
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
