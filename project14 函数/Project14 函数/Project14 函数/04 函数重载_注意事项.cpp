#include <iostream>
using namespace std;
//�������ص�ע������
//1��������Ϊ���ص�����
void func(int &a) //int& a = 10;���Ϸ�
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a) //const int& a = 10; �Ϸ�
{
	cout << "func(const int& a)����" << endl;
}

void func2(int a, int b = 10) 
{
	cout << "func2(int a )�ĵ���" << endl;
}

void func2(const int a) 
{
	cout << "func2(int a )�ĵ���" << endl;
}
//2����������������Ĭ�ϲ������ײ���������
int main4()
{
	//���� func(int& a)
	int a = 10;
	func(a);

	cout << endl;
	//���� func(const int& a)
	func(10);

	//func2(10);//�ж�� ���غ��� "func2" ʵ��������б�ƥ��:

	system("pause");
	return 0;
}