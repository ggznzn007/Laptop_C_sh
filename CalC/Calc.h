#pragma once

#include <iostream>
using namespace std;
class Calc
{
private:
	int a, b;
public:
	virtual void setValue(int x,int y);
	virtual int calculate() = 0;
};

