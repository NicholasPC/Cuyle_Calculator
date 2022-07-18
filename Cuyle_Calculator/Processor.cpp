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
	for (size_t i = 0; i < input.length(); i++) {
		switch (input[i]) {
		case '+':
		case'-':
		case'*':
		case'/':
		case '%':
			if (symb == ' ') {
				fin = first;
			}
			else {
				switch (symb) {
				case '+':
					fin += first;
					break;
				case '-':
					fin -= first;
				case '*':
					fin *= first;
				case '/':
					fin /= first;
				}
			}

			//first = 0;
			symb = input[i];
			break;
		}
	}

	switch (symb) {
	case ' ':
		fin = first;
		break;
	case'+':
		fin += first;
		break;
	case'-':
		fin -= first;
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

	//first = 0;

	std::string negate = "";
	bool flipped = fin < 0;
	if (flipped)
		fin = -fin;

	switch (out) {
	case 2:
		for (; fin > 0; fin /= 2)
			negate.insert(0, std::to_string(fin % 2));
		if (flipped)
			negate.insert(0, "-");

		*screen << negate;
		break;

	case 8:
		for (; fin > 0; fin /= 8)
			negate.insert(0, std::to_string(fin % 8));
		if (flipped)
			negate.insert(0, "-");

		*screen << negate;
		break;

	case 10:
		if (flipped)
			fin = -fin;

		*screen << std::to_string(fin);
		break;
	}
}
