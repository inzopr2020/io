#pragma once
#include <iostream>
using namespace std;
class wizyta
{private:
	string data;
	string godzina;
	bool koniec_wizyty;
	
public:
	wizyta();
	~wizyta();
	void podsumuj_wizyte(string numer_karty_pacjenta, string historia);
	void zarezerwuj_wizyte(string data, string lekarz);
	bool zakonczyc_wizyte();
};
