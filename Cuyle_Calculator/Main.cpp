#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Cuyle Calculator WIP", wxPoint(200, 200), wxSize(800, 600)) {
	screen = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(650, 30));
	clearScreen = new wxButton(this, wxID_ANY, "C", wxPoint(690, 10), wxSize(70, 30));
	zero = new wxButton(this, wxID_ANY, "0", wxPoint(20, 80), wxSize(400, 40));

	wxGridSizer* numberPad = new wxGridSizer(numPX, numPY, 30, 100);

	pad = new int[numPX * numPY];

	for (int i = 0; i < numPX; i++) {
		for (int j = 0; j < numPY; j++) {

		}
	}
}

Main::~Main() {

}
