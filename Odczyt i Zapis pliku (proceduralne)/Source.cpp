/*Robert Wyszecki
Program Odczytuj¹cy i zapisuj¹cy
plik tekstowy
ostatnia data aktualizacji 02.10 2016*/

#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include"funkcje.h"

using namespace std;



/*void zapis(){
	fstream plik;
	plik.open("wizytowka.txt", ios::out);
}*/

/*void intreduce(string name, string surname, int *age, int *number){
	cout << "Prosze podac swoje imie: ";
	cin >> name;
	cout << "Prosze podac swoje nazwisko: ";
	cin >> surname;
	cout << "Prosze podac swoj wiek: ";
	cin >> *age;
	cout << "Prosze podac swoj nr telefonu";
	cin >> *number;
}*/




int main(){
	bool done = 0;
	int choice = 0;
	string name;
	string sname;
	int age;
	int number;

	while (!done)
	{
		menu(&choice);
		switch (choice){
		case 1:	
			intreduce(&name, &sname, &age, &number);
			nadpis(&name, &sname, &age, &number);
			break;
		case 2:
			intreduce(&name, &sname, &age, &number);
			dodaj(&name, &sname, &age, &number);
			break;
		case 3: cout << "Opcja jeszcze niedostepna. Wkrotce nastapi aktualizacja oprogramowania.";
			break;
		case 4: done = 1;
			break;
		default: cout << "Niepoprawna wartosc"<<endl;
				break;
		}
	}
	
	cin.get();
	return 0;
}
