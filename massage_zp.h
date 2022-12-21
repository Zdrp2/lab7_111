#pragma once
#include "massage.h"

class massage_zp : public massage {
protected:
	float ZP;
	float award;
	float itog;
public:
	massage_zp(int id, string name, int exp, float zp, float aw);
	massage_zp();
	~massage_zp();

	float get_itog();
	float get_zp();
	void print();
};