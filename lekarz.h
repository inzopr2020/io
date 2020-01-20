#pragma once
#include <iostream>
using namespace std;
class lekarz
{private:
	string specjalizacja;
	string numer_licencji;
public:
	lekarz();
	virtual ~lekarz();

	void ustal_harmonogram(string data);
	void podsumuj_wizyte(string numer_karty_pacjenta, string historia);
	void utworz(string specjalizacja1, string numer_licencji1);
};

