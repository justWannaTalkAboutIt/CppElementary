#include <iostream>
using namespace std;
void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 �� a = " << a << endl;
	cout << "swap1 �� b = " << b << endl;
}

void swap2(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7()
{
	//ָ��ͺ���
	//1��ֵ����
	int a = 10;
	int b = 20;

	cout << "swap1����ǰ��" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap1(a, b);
	cout << "swap1������" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2����ַ����
	cout << endl;
	cout << "swap1����ǰ��" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap2(&a, &b);
	cout << "swap2������" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}