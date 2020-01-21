#pragma once
#include <iostream>
using namespace std;
class harmonogram
{private:
	string numer_licencji;
	int terminy_zajete;

public:
	harmonogram();
	~harmonogram();
	void przeslij_data(string data);
	int harmonogram_pracy();  //do testów
};
