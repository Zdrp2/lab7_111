
#include "massage.h"
#include "massage_zp.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <time.h> 
#include <clocale>
#include <Windows.h>
#include <string.h>
#include <stdint.h>
#include <vector>
#include <set>
#include <stdbool.h>
#include <string>
using namespace std;
int main()
{
	vector<string> Massagiste;
	massage ms11(22, "Иван Иванович", 17);
	massage_zp mszp11(26, "Илья", 15, 17000, 2000);
	Massagiste.insert(Massagiste.begin(), ms11.retfio());
	Massagiste.push_back(mszp11.retfio());

	for (string need : Massagiste) {
		if (need == "Илья")
			cout << "Поиск успешен\n" << endl;
	}

	for (string need : Massagiste)
	{
		int i = 0;
		string help;
		if (Massagiste[i] > Massagiste[i + 1]) {
			help = Massagiste[i];
			Massagiste[i] = Massagiste[i + 1];
			Massagiste[i+1] = help;
		}
	}

	for (string need : Massagiste)
	{
		cout << need << endl;
	}

	set<string> Massagiste_set;
	Massagiste_set.insert(Massagiste_set.begin(), ms11.retfio());
	Massagiste_set.insert(Massagiste_set.end(), mszp11.retfio());
	set<string>::iterator it = Massagiste_set.find("Илья");
	cout << "\nПоиск через set успешен:\n" + *it;
}