#include "pch.h"
#include "karta_pacjenta.h"


karta_pacjenta::karta_pacjenta()
{
}


karta_pacjenta::~karta_pacjenta()
{
}

void karta_pacjenta::przeslij_date(string data) 
{
	cout << "Wybrana data to:" << data << endl;
}
void karta_pacjenta::podsumuj_wizyte(string nr_karty, string historia)
{
	historia_zdrowotna = historia;
}

void karta_pacjenta::utworz(string numer_karty_pacjenta1, string historia_zdrowotna1)
{
	numer_karty_pacjenta = numer_karty_pacjenta1;
	historia_zdrowotna = historia_zdrowotna1;
}