#include "pch.h"
#include "harmonogram.h"


harmonogram::harmonogram()
{
	terminy_zajete = 0;
}


harmonogram::~harmonogram()
{

}

void harmonogram::przeslij_data(string data)
{
	terminy_zajete++;
	return ;
}

int harmonogram::harmonogram_pracy()
{
	return terminy_zajete;
}
