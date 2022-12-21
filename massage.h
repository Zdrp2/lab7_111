#pragma once
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
class massage
{
protected:
	int MassageId;
	int exp;
	string fio;
public:
	massage();

	massage(int i, string h, int ex);

	~massage();

	string retfio();
};