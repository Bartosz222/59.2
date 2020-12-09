#pragma once
#include <fstream>
#include <string>
using namespace std;
class palindrom{
	ifstream wejscie;
	int liczba;
	int suma;
	bool wynik=true;
	string znakOdwrocony;
	public:
		palindrom();
		~palindrom();
	void wczytajLiczbe();
	void odwrocLiczbe();
	void dodaj();
	bool sprawdzCzyPalindrom();
};
