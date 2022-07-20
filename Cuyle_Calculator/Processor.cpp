#include "Processor.h"

Processor* Processor::calc = nullptr;

Processor* Processor::GetInstance() {

	if (Processor::calc == nullptr) {
		Processor::calc = new Processor;
	}

	return Processor::calc;
}

void Processor::calculation(wxTextCtrl* screen, unsigned char in, unsigned char out) {
	std::string input = screen->GetLineText(0).ToStdString();
	screen->Clear();
	long long fin = 0;
	long long first = 0;
	char symb = ' ';
	bool flipped = false;
	for (size_t i = 0; i < input.length(); i++) {
		switch (input[i]) {
		case '+':
		case'-':
		case'*':
		case'/':
		case '%':
			fin = first;
			first = 0;
			symb = input[i];
			break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
			first *= in;
			first += input[i] - 'A' + 10;
			break;

		default:
			first *= in;
			first += input[i] - '0';
		}
	}

	switch (symb) {
	case ' ':
		fin = first;
		break;
	case'+':
		if (flipped) {
			if (first >= fin) {
				flipped = false;
				fin = first - fin;
			}
			else
				fin -= first;
		}
		else {
			fin += first;
		}
		break;
	case'-':
		if (flipped) {
			fin += first;
		}
		else if (first > fin) {
			fin = first - fin;
			flipped = true;
		}
		else {
			fin -= first;
		}
		break;
	case'*':
		fin *= first;
		break;
	case'/':
		fin /= first;
		break;
	case'%':
		fin %= first;
	}

	std::string output = "";
	if (fin == 0) {
		flipped = false;
		output = "";
	}

	for (; fin > 0; fin /= out) {
		switch (fin % out) {
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			output.insert(0, std::string(1, (fin % out - 10) + 'A'));
			break;

		default:
			output.insert(0, std::to_string(fin % out));
		}
	}
	if (flipped)
		output.insert(0, "-");
	*screen << output;
}
