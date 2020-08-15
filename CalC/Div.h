#pragma once
#include "Calc.h"
class Div :
    public Calc
{
private:
	int a, b;
public:
	virtual void setValue(int x, int y);
	virtual int calculate();
};

