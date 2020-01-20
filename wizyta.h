#pragma once
#include <iostream>
using namespace std;
class wizyta
{private:
	string data;
	string godzina;
	string lekarz;
	string numer_karty_pacjenta;

public:
	wizyta();
	~wizyta();
	void podsumuj_wizyte(string numer_karty_pacjenta1, string historia);
	void zarezerwuj_wizyte(string data1, string godzina1, string lekarz1, string numer_karty_pacjenta1);

};

