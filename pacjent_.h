#pragma once

#include <iostream>
using namespace std;
class pacjent_
{
private:
	string pesel;
	int numer_karty_pacjenta;
	int il_rezerwacji;
public:
	void zarezerwuj_wizyte(string data, string specjalizacja, string lekarz);
	void zmien_dane(string telefon, string adres);
	void zarejestruj_pacjenta(string imie, string nazwisko, string adres, string telefon, string pesel);
	void zwroc_il_rezerwacji();
	pacjent_();
	virtual ~pacjent_();
};

