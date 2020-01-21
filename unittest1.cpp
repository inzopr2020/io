
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication2/pacjent_.h"
#include "../ConsoleApplication2/pacjent_.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testjednostkowy1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			pacjent_ p1;
			Assert::AreEqual(p1.zwroc_il_rezerwacji(), 0);

		}
		TEST_METHOD(TestMethod2)
		{
			pacjent_ p1;
			p1.zarezerwuj_wizyte("56546", "ucdghu", "gcuhdgy");
			Assert::AreEqual(p1.zwroc_il_rezerwacji(), 1);
		}

		TEST_METHOD(TestMethod3)
		{
			pacjent_ p1;
			p1.zarejestruj_pacjenta("Karol", "Kownacki", "Lonika 137", "674526987", "256894762");
			Assert::AreEqual(p1.numer_pacjenta(), 001);
		}
		TEST_METHOD(TestMethod4)
		{
			harmonogram lekarz1;
			lekarz1.przeslij_data("10.01.2021");
			Assert::AreEqual(lekarz1.harmonogram_pracy(), 1);
		}

		TEST_METHOD(TestMethod5)
		{
			wizyta wizyta_1;
			wizyta_1.podsumuj_wizyte(" pacjent wyleczony, brak leków i recepty","001");
			Assert::AreEqual(wizyta_1.zakonczyc_wizyte(), true);
		}

		TEST_METHOD(TestMethod6)
		{
			wizyta wizyta_1;
			wizyta_1.zarezerwuj_wizyte("10.01.2021","Kowalczyk");
			Assert::AreEqual(wizyta_1.zakonczyc_wizyte(), false);
		}
		TEST_METHOD(TestMethod7)
		{
			przychodnia p_1;
			p_1.nadaj_numer_karty_pacjenta("9856247598");
			Assert::AreEqual(p_1.wyswietl_numer(), 001);
		}
	};
}
