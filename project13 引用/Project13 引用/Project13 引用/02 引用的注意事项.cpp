#include <iostream>
using namespace std;

int main2()
{
	int a = 10;
	//1�����ñ����ʼ��
	//int& b;//���� ���� "b" ��Ҫ��ʼֵ�趨��
	int& b = a;
	//2�����ó�ʼ���󲻿��Ըı�
	int c = 20;
	b = c; //�Ǹ�ֵ�����������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}