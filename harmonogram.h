#pragma once
#include <iostream>
using namespace std;
class harmonogram
{private:
	string numer_licencji;

public:
	harmonogram();
	~harmonogram();
	void przeslij_data(string data);
	void utworz(string numer_licencji1);
};

