#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(296, 390)) {

	function = new wxButton * [17];

	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(210, 70), wxTE_READONLY);
	clearScreen = new wxButton(this, 11016, "C", wxPoint(210, 0), wxSize(70, 70));
	function[0] = clearScreen;

	zero = new wxButton(this, 11000, "0", wxPoint(70, 280), wxSize(70, 70));
	function[1] = zero;
	one = new wxButton(this, 11001, "1", wxPoint(0, 210), wxSize(70, 70));
	function[2] = one;
	two = new wxButton(this, 11002, "2", wxPoint(70, 210), wxSize(70, 70));
	function[3] = two;
	three = new wxButton(this, 11003, "3", wxPoint(140, 210), wxSize(70, 70));
	function[4] = three;
	four = new wxButton(this, 11004, "4", wxPoint(0, 140), wxSize(70, 70));
	function[5] = four;
	five = new wxButton(this, 11005, "5", wxPoint(70, 140), wxSize(70, 70));
	function[6] = five;
	six = new wxButton(this, 11006, "6", wxPoint(140, 140), wxSize(70, 70));
	function[7] = six;
	seven = new wxButton(this, 11007, "7", wxPoint(0, 70), wxSize(70, 70));
	function[8] = seven;
	eight = new wxButton(this, 11008, "8", wxPoint(70, 70), wxSize(70, 70));
	function[9] = eight;
	nine = new wxButton(this, 11009, "9", wxPoint(140, 70), wxSize(70, 70));
	function[10] = nine;

	mod = new wxButton(this, 11010, "%", wxPoint(0, 280), wxSize(70, 70));
	function[11] = mod;
	equals = new wxButton(this, 11011, "=", wxPoint(140, 280), wxSize(70, 70));
	function[12] = equals;
	plus = new wxButton(this, 11012, "+", wxPoint(210, 70), wxSize(70, 70));
	function[13] = plus;
	minus = new wxButton(this, 11013, "-", wxPoint(210, 140), wxSize(70, 70));
	function[14] = minus;
	multiply = new wxButton(this, 11014, "*", wxPoint(210, 210), wxSize(70, 70));
	function[15] = multiply;
	divide = new wxButton(this, 11015, "/", wxPoint(210, 280), wxSize(70, 70));
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
