#include <iostream>
using namespace std;

int main5()
{
	//1��const����ָ�� ����ָ�� 
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ��ָ����Ը�
	p = &b;

	//2��const���γ��� ָ�볣��
	int* const p2 = &a;
	//ָ�벻���Ըģ�ָ��ָ��ֵ���Ը�
	*p2 = 100;

	//3��const����ָ��ͳ���
	const int* const p3 = &a;

	system("pause");
	return 0;
}