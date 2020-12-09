#include"klasy.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
palindrom::palindrom(){
	wejscie.open("liczby.txt");
	wynik=true;
}
palindrom::~palindrom(){
	wejscie.close();
}
void palindrom::wczytajLiczbe(){
	if(wejscie.good()){
		while(!wejscie.eof()){
			wejscie>>liczba;
			cout<<"Liczba: "<<liczba;
			odwrocLiczbe();
			dodaj();
			sprawdzCzyPalindrom();
		}
	}
	else{
		cout<<"Blad"<<endl;
	}
}
void palindrom::odwrocLiczbe(){
	
	string znak = to_string(liczba);
	znakOdwrocony = znak;
	for(int i=0;i<=znak.length();i++){
		znakOdwrocony[i] = znak[znak.length()-i-1];
	}
	cout<<" Liczba odwrocona: "<<znakOdwrocony;
}
void palindrom::dodaj(){
	int liczbaOdwrocona;
	sscanf(znakOdwrocony.c_str(),"%d",&liczbaOdwrocona);
	suma = liczba + liczbaOdwrocona;
	cout<<" Suma: "<<suma;
}
bool palindrom::sprawdzCzyPalindrom(){
	string sumaZnak = to_string(suma);
	for(int i=0;i<sumaZnak.length()/2;i++){
		if(sumaZnak[i] != sumaZnak[sumaZnak.length()-i-1]){
			wynik=false;
			cout<<" Czy Suma jest palindromem: "<<wynik<<endl;
			return false;
		}
	}
	wynik=true;
	cout<<" Czy Suma jest palindromem: "<<wynik<<endl;
	return true;
}
