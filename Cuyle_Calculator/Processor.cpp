#include "Processor.h"

Processor &Processor::GetInstance() {

	static Processor calc = Processor();
	return calc;
}

void Processor::calculation(wxTextCtrl* screen, unsigned char modeIn, unsigned char modeOut) {
	
	std::string in = screen->GetLineText(0).ToStdString();
	screen->Clear();
	long long final = 0;
	long long first = 0;
	char symb = ' ';
	for (size_t i = 0; i < in.length(); i++) {
		switch (in[i]) {
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			if (symb == ' ') {
				final = first;
			}
			else {
				switch (symb) {
				case '+':
					final += first;
					break;
				case '-':
					final -= first;
					break;
				case '*':
					final *= first;
					break;
				case '/':
					final /= first;
					break;
				case '%':
					final %= first;

				}
			}

			first = 0;
			symb = in[i];
			break;

		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
			first *= modeIn;
			first += in[i] - 'A' + 10;
			break;

		default:
			first *= modeIn;
			first += in[i] - '0';
		}
	}

	switch (symb) {
	case ' ':
		final = first;
		break;

	case'+':
		final += first;
		break;
	case'-':
		final -= first;
		break;
	case'*':
		final *= first;
		break;
	case'/':
		final /= first;
		break;
	case'%':
		final %= first;
	}
	first = 0;

	std::string out = "";
	bool flipped = final < 0;
	if (flipped)
		final = -final;

	switch (modeOut) {
	case 2:
		for (; final > 0; final /= 2)
			out.insert(0, std::to_string(final % 2));

		if (flipped)
			out.insert(0, "-");

		*screen << out;
		break;

	case 8:
		for (; final > 0; final /= 8)
			out.insert(0, std::to_string(final % 8));

		if (flipped)
			out.insert(0, "-");

		*screen << out;
		break;

	case 10:
		if (flipped)
			final = -final;
		*screen << std::to_string(final);
		break;

	case 16:
		for (; final > 0; final /= 16) {
			switch (final % 16) {
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
				out.insert(0, std::string(1, (final % 16 - 10) + 'A'));
				break;

			default:
				out.insert(0, std::to_string(final % 16));
			}
		}
		if (flipped)
			out.insert(0, std::string(1, '-'));

		*screen << out;
		break;
	}
	
}
