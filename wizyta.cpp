#include "pch.h"
#include "wizyta.h"


wizyta::wizyta()
{
	koniec_wizyty = false;
	
}


wizyta::~wizyta()
{
}

bool wizyta::zakonczyc_wizyte()
{
	
	return koniec_wizyty;
}

void wizyta::podsumuj_wizyte(string numer_karty_pacjenta, string historia)
{
	koniec_wizyty = true;
	return;
}

void wizyta::zarezerwuj_wizyte(string data, string lekarz)
{
	koniec_wizyty = false;
	return;
}
