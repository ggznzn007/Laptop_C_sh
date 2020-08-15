#include "Calc.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include <iostream>
using namespace std;

void main()
{
	int a, b;
	int num;
	cout << "계산을 선택하세요(0:Add, 1:Sub, 2:Mul, 3:Div)>> ";
	cin >> num;
	if (num == 0)
	{ 
		cout << "Add 계산입니다"<<endl;
		cout << "숫자 2개를 입력하세요"<<endl;
		cin >> a >> b;
		cout << "결과는" <<   "입니다"<< endl;
	}
	else if(num==1)
	{ 
		cout << "Sub 계산입니다" << endl;
		cout << "숫자 2개를 입력하세요" << endl;
		cin >> a >> b;
		cout << "결과는" <<  "입니다" << endl;
	}
	else if (num == 2)
	{
		cout << "Sub 계산입니다" << endl;
		cout << "숫자 2개를 입력하세요" << endl;
		cin >> a >> b;
		cout << "결과는"<<  "입니다" << endl;
	}		
	else if (num == 3)
	{
		cout << "Sub 계산입니다" << endl;
		cout << "숫자 2개를 입력하세요" << endl;
		cin >> a >> b;
		cout << "결과는" << "입니다" << endl;
	}
		
	

	Calc* calc[4] = { new Add(),
					  new Sub(),
					  new Mul(), 
					  new Div() };


	delete calc[0];
	delete calc[1];
	delete calc[2];
	delete calc[3];
}