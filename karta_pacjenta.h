#include <iostream>
using namespace std;
#pragma once
class karta_pacjenta
{private:
	string numer_karty_pacjenta;
	string historia_zdrowotna;

public:
	karta_pacjenta();
	~karta_pacjenta();
	void przeslij_date(string data);
	void podsumuj_wizyte(string nr_karty, string historia);
	void utworz(string numer_karty_pacjenta1, string historia_zdrowotna1);
};

