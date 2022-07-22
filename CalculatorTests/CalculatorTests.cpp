#include "pch.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Cuyle_Calculator/Factory.h"
#include "../Cuyle_Calculator/Processor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(FactoryTests)
	{
	private:
		wxFrame* test = new wxFrame(nullptr, wxID_ANY, "CALCULATOR TESTING", wxPoint(200, 200), wxSize(507, 390));
	public:
		
		TEST_METHOD(number0CreationTest) {
			int id = 11000;
			wxButton* zero = Factory::create0(test);
			Assert::IsTrue(zero->GetId() == id);
		}
		TEST_METHOD(number1CreationTest) {
			int id = 11001;
			wxButton* one = Factory::create1(test);
			one->GetId() == id;
		}
		TEST_METHOD(number2CreationTest) {
			int id = 11002;
			wxButton* two = Factory::create2(test);
			two->GetId() == id;
		}
		TEST_METHOD(number3CreationTest) {
			int id = 11003;
			wxButton* three = Factory::create3(test);
			three->GetId() == id;
		}
		TEST_METHOD(number4CreationTest) {
			int id = 11004;
			wxButton* four = Factory::create4(test);
			four->GetId() == id;
		}
		TEST_METHOD(number5CreationTest) {
			int id = 11005;
			wxButton* five = Factory::create5(test);
			five->GetId() == id;
		}
		TEST_METHOD(number6CreationTest) {
			int id = 11006;
			wxButton* six = Factory::create6(test);
			six->GetId() == id;
		}
		TEST_METHOD(number7CreationTest) {
			int id = 11007;
			wxButton* seven = Factory::create6(test);
			seven->GetId() == id;
		}
		TEST_METHOD(number8CreationTest) {
			int id = 11008;
			wxButton* eight = Factory::create6(test);
			eight->GetId() == id;
		}
		TEST_METHOD(number9CreationTest) {
			int id = 11009;
			wxButton* nine = Factory::create6(test);
			nine->GetId() == id;
		}
		
	};
	TEST_CLASS(ProcessorTests) {
private:
	wxFrame* test = new wxFrame(nullptr, wxID_ANY, "CALCULATOR TESTING", wxPoint(200, 200), wxSize(507, 390));
	Processor* calc = &Processor::GetInstance();
	wxTextCtrl* screen = new wxTextCtrl(test, wxID_ANY, "", wxPoint(0, 0), wxSize(490, 70), wxTE_READONLY);

public:
		TEST_METHOD(addition) {
			*screen << 20 << "+" << 5;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "25");
			screen->Clear();
		}
		TEST_METHOD(minus) {
			*screen << 50 << "-" << 20;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "30");
			screen->Clear();
		}
		TEST_METHOD(mult) {
			*screen << 40 << "*" << 2;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "80");
			screen->Clear();
		}
		TEST_METHOD(divide) {
			*screen << 200 << "/" << 20;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "10");
			screen->Clear();
		}
		TEST_METHOD(mod) {
			*screen << 10 << "%" << 5;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "0");
			screen->Clear();
		}
		TEST_METHOD(single) {
			*screen << 36;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "36");
			screen->Clear();
		}
		TEST_METHOD(makeNegative) {
			*screen << 0 << "-" << 12;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "-12");
			screen->Clear();
		}
		TEST_METHOD(addToNegative) {
			*screen << -14 << "+" << 15;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "1");
			screen->Clear();
		}
		TEST_METHOD(subtractFromNegative) {
			*screen << -10 << "-" << 12;
			calc->calculation(screen, 10, 10);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "-22");
			screen->Clear();
		}
		TEST_METHOD(Hex) {
			*screen << 5 << "+" << 5;
			calc->calculation(screen, 10, 16);
			std::string out = screen->GetLineText(0).ToStdString();
			Assert::IsTrue(out == "A");
			screen->Clear();
		}
	};
}
