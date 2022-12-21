#include "massage_zp.h"
#include "massage.h"
#include "massage_zp.h"

massage_zp::massage_zp(int id, string name, int Exp, float zp, float aw) {
	MassageId = id;
	fio = name;
	exp = Exp;
	ZP = zp;
	award = aw;
	itog = zp + aw;
}

massage_zp::massage_zp() {
	MassageId = 0;
	fio = "Нет имени";
	exp = 0;
	ZP = 0;
	award = 0;
	itog = 0;
}
massage_zp::~massage_zp() {
}

float massage_zp::get_itog() {
	return itog;
}


float massage_zp::get_zp() {
	return ZP;
}

void massage_zp::print()
{
	cout << endl << "Id массажиста" << MassageId;
}