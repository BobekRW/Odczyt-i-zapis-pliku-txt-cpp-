/*Robert Wyszecki
Program Odczytuj¹cy i zapisuj¹cy
plik tekstowy
ostatnia data aktualizacji 05.10 2016*/

#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include"funkcje.h"

using namespace std;


int main(){
	bool done = 0;
	int choice = 0;
	string name;
	string sname;
	string output;
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
		case 3:odczyt(&output);
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
