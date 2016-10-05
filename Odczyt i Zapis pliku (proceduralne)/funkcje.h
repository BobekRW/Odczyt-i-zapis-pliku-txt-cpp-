#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

using namespace std;

void check(){
}

void menu(int *choice){
	cout << "Co chcesz zrobic ?:" << endl;
	cout << "1. Nadpisz dane" << endl;
	cout << "2. Dopisz dane" << endl;
	cout << "3. Odczytaj dane" << endl;
	cout << "4. Wyjdz z programu " << endl;
	cout << "Wybor: ";
	cin >> *choice;
	while (cin.good() != 1){
		cout << "Zostala podana niepoprawna wartosc. Prosze podac inna wartosc: ";
		cin.clear();
		cin.sync();
		cin >> *choice;
	}
}

void nadpis(string *name, string *surname, int *age, int *number){
	fstream plik;
	plik.open("wizytowka.txt", ios::out);
	plik<<"Imie i nazwisko: "<<*name<<" "<<*surname<<endl;
	plik<<"Wiek: "<<*age<<endl;
	plik<<"Nr telefonu: "<<*number<<endl;

	plik.close();
}

void dodaj(string *name, string *surname, int *age, int *number){
	fstream plik;
	plik.open("wizytowka.txt", ios::app);
	plik << endl;
	plik << "Imie i nazwisko: " << *name << " " << *surname << endl;
	plik << "Wiek: " << *age << endl;
	plik << "Nr telefonu: " << *number << endl;

	plik.close();
}



void intreduce(string *name, string *surname, int *age, int *number){
	cout << "Prosze podac swoje imie: ";
	cin >> *name;
	cout << "Prosze podac swoje nazwisko: ";
	cin >> *surname;
	cout << "Prosze podac swoj wiek: ";
	cin >> *age;
	cout << "Prosze podac swoj nr telefonu: ";
	cin >> *number;
}

void odczyt(string *out){
	fstream plik;
	plik.open("wizytowka.txt");
	if (plik.good() == false){
		cout << "Nie mozna otworzyc pliku." << endl;
	}
	else
	{
		while (!plik.eof()){
			/*plik >> *out;
			cout << *out << endl;*/
			getline(plik, *out);
			cout << *out << endl;
		}
	}
	
	plik.close();

}