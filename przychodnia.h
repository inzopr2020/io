#pragma once
#include <iostream>
using namespace std;
class przychodnia
{private:
	string nazwa;
	string adres;
public:
	przychodnia();
	~przychodnia();
	string nadaj_numer_karty_pacjenta(string pesel);
};

