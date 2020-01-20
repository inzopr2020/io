#pragma once

#include <iostream>
using namespace std;
class pacjent_
{
private:
	string pesel;
	int numer_karty_pacjenta;
	int il_rezerwacji;
	string telefon;
	string adres;
	string imie;
	string nazwisko;

public:
	void zarezerwuj_wizyte(string data, string specjalizacja, string lekarz);
	void zmien_dane(string telefon1, string adres1);
	void zarejestruj_pacjenta(string imie1, string nazwisko1, string adres1, string telefon1, string pesel1, int numer_karty_pacjenta1);
	void zwroc_il_rezerwacji();
	pacjent_();
	virtual ~pacjent_();
	
};

