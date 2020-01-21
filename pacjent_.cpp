#include "pch.h"
#include "pacjent_.h"
#include <iostream>

using namespace std;


pacjent_::pacjent_()
{
	il_rezerwacji = 0;
	numer_karty_pacjenta = 0;

}



pacjent_::~pacjent_()
{
}


int pacjent_::zwroc_il_rezerwacji()
{
	return il_rezerwacji;
}

void pacjent_::zarezerwuj_wizyte(string data, string specjalizacja, string lekarz)
{
		

		il_rezerwacji++;
		return;
}

void pacjent_:: zmien_dane(string telefon, string adres)
{
	
}

void pacjent_:: zarejestruj_pacjenta(string imie, string nazwisko, string adres, string telefon, string pesel)
{
	numer_karty_pacjenta = 001;
	return ;
}

int pacjent_:: numer_pacjenta()
{
	return numer_karty_pacjenta;
}
