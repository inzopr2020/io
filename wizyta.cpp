#include "pch.h"
#include "wizyta.h"


wizyta::wizyta()
{
}


wizyta::~wizyta()
{
}
void wizyta::podsumuj_wizyte(string numer_karty_pacjenta1, string historia)
{
	cout << historia << endl;
}
void wizyta::zarezerwuj_wizyte(string data1, string godzina1, string lekarz1, string numer_karty_pacjenta1)
{
	data = data1;
	godzina = godzina1;
	lekarz = lekarz1;
	numer_karty_pacjenta = numer_karty_pacjenta1;

}