#include <iostream>
using namespace std;

int main6()
{
	//��Ŀ�����

	//������������ a b c
	//��a��b���Ƚϣ� ���������ֵ����c

	int a = 10;
	int b = 20;
	int c = 30;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;
	
	cout << "c++����Ŀ��������ص��Ǳ��������Լ�����ֵ" << endl;
	cout << "a < b?" << (a < b) << endl;
	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}