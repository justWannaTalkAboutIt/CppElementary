#include <iostream>
using namespace std;

int main1()
{
	//1������һ��ָ��
	int a = 10;
	// ָ�붨����﷨���������� * ָ���������
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	cout << endl;

	//2��ʹ��һ��ָ��
	cout << "ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����" << endl;
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}