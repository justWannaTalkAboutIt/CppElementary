#include <iostream>
using namespace std;

int add( int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;
}

int main2() 
{
	int a = 10;
	int b = 20;

	int sum = add(a,b);
	cout << "a �� b ��ʵ��" << endl;
	cout << "add �е�num1��num2���β�" << endl;

	cout << sum << endl;

	system("pause");
	return 0;
}