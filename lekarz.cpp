#include "pch.h"
#include "lekarz.h"


lekarz::lekarz()
{
}


lekarz::~lekarz()
{
}
void lekarz::ustal_harmonogram(string data)
{
	cout << "Wybrana data to:" << data << endl;
}
void lekarz::podsumuj_wizyte(string numer_karty_pacjenta, string historia)
{
	cout << "Dla pacjenta" << numer_karty_pacjenta << " zapisano: " << historia << endl;
}
void lekarz::utworz(string specjalizacja1, string numer_licencji1)
{
	specjalizacja = specjalizacja1;
	numer_licencji = numer_licencji1;
}