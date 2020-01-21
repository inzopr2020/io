#pragma once
#include <iostream>
using namespace std;
class przychodnia
{private:
	string nazwa;
	string adres;
	int numer_karty;
public:
	przychodnia();
	~przychodnia();
	string nadaj_numer_karty_pacjenta(string pesel);
	int wyswietl_numer();
};
