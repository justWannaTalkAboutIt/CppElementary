#include <iostream>
using namespace std;

//��������������ֵ
//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}
//2�������ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ����������������ͷ�
	return a;
}

int main4()
{
	int& ref = test01();
	cout << "ref = " << ref << endl; //���룬��Ϊ�ڴ��Ѿ��ͷ�
	cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000; //����������Ϊ��ֵ�����ر��� ref2


	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	cout << "�����������ֵ��һ�����ã��������ÿ�����Ϊ��ֵ����" << endl;

	system("pause");
	return 0;
}