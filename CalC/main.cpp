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
	cout << "����� �����ϼ���(0:Add, 1:Sub, 2:Mul, 3:Div)>> ";
	cin >> num;
	if (num == 0)
	{ 
		cout << "Add ����Դϴ�"<<endl;
		cout << "���� 2���� �Է��ϼ���"<<endl;
		cin >> a >> b;
		cout << "�����" <<   "�Դϴ�"<< endl;
	}
	else if(num==1)
	{ 
		cout << "Sub ����Դϴ�" << endl;
		cout << "���� 2���� �Է��ϼ���" << endl;
		cin >> a >> b;
		cout << "�����" <<  "�Դϴ�" << endl;
	}
	else if (num == 2)
	{
		cout << "Sub ����Դϴ�" << endl;
		cout << "���� 2���� �Է��ϼ���" << endl;
		cin >> a >> b;
		cout << "�����"<<  "�Դϴ�" << endl;
	}		
	else if (num == 3)
	{
		cout << "Sub ����Դϴ�" << endl;
		cout << "���� 2���� �Է��ϼ���" << endl;
		cin >> a >> b;
		cout << "�����" << "�Դϴ�" << endl;
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