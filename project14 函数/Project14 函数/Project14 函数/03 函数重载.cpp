#include <iostream>
using namespace std;

//��������
//������������ͬ����ߺ���������
void func() 
{
	cout << "func �ĵ���" << endl;
}
//�����������������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ���������ͬ����˳��ͬ
//4������ֵ���Ͳ�ͬ������Ϊ������������
void func(int a) 
{
	cout << "func(int a) �ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a) �ĵ���" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}

int main3() 
{
	func();
	func(10);
	func(10,3.14);
	func(3.14,10);

	cout << "��������ֵ��������Ϊ������������" << endl;

	system("pause");
	return 0;
}