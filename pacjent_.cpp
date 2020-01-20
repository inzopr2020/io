#include "pch.h"
#include "pacjent_.h"



pacjent_::pacjent_()
{

}

pacjent_::~pacjent_()
{
}

void pacjent_::zarezerwuj_wizyte(string data, string specjalizacja, string lekarz)
{
	il_rezerwacji++;
	cout << "Zarezerwowano wizyte u lekarza " << specjalizacja << lekarz << endl;
}

void pacjent_::zmien_dane(string telefon1, string adres1)
{
	telefon = telefon1;
	adres = adres1;

}
void pacjent_::zarejestruj_pacjenta(string imie1, string nazwisko1, string adres1, string telefon1, string pesel1, int numer_karty_pacjenta1) 
{
	imie = imie1;
	nazwisko = nazwisko1;
	telefon = telefon1;
	il_rezerwacji = 0;
	adres = adres1;
	pesel = pesel1;
	numer_karty_pacjenta = numer_karty_pacjenta1;
}
	
void pacjent_::zwroc_il_rezerwacji()
{
	cout << "Ilosc rezerwacji wynosi:" << il_rezerwacji << endl;
}