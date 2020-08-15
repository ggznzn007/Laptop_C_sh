#pragma once
#include "Calc.h"
class Sub :
    public Calc
{
private:
	int a, b;
public:
	virtual void setValue(int x, int y);
	virtual int calculate();
};

