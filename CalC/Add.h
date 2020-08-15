#pragma once
#include "Calc.h"
class Add : public Calc
{
private:
	int a, b;
public:	
	virtual void setValue(int x, int y);
	virtual int calculate();
};

