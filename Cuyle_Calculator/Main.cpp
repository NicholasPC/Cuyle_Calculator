#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(800, 600)) {
	
}

Main::~Main() {

}
