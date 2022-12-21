#include "massage.h"
#include "massage_zp.h"

massage::massage(){
	MassageId = 0;
	exp = 0;
	fio = "нет имени";
}

massage::massage(int i, string h, int ex) {
	MassageId = i;
	exp = ex;
	fio = h;
}

massage::~massage() {
}

string massage::retfio() {
	return fio;
}