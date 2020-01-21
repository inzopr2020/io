

#include "pch.h"
#include "przychodnia.h"


przychodnia::przychodnia()
{
	numer_karty = 000;
}


przychodnia::~przychodnia()
{

}

string przychodnia::nadaj_numer_karty_pacjenta(string pesel)
{
	numer_karty = 001;
	return pesel;
}

int przychodnia::wyswietl_numer()
{
	return numer_karty;
}
przychodnia::~przychodnia()
{
}
string przychodnia::nadaj_numer_karty_pacjenta(string pesel)
{
	cout << "Nadany numer karty pacjenta to:" << pesel << endl;
	return pesel;
}
