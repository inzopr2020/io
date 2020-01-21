
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
	};
}
