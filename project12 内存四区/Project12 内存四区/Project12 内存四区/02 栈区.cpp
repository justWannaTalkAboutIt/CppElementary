#include<iostream>
using namespace std;

//ջ�� ע�⣺��Ҫ���ؾֲ�������ַ
//ջ�������ɱ����������ٺ��ͷ�

int* func1() 
{
	int a = 10; // �ֲ�������ַ
	cout << "�ֲ����� �����ջ��������ִ������Զ��ͷ�" << endl;
	return &a;//���ؾֲ������ĵ�ַ
}

void dummy1() 
{
	int x = 999;
	cout << "x��ַ��" << &x << endl;
}
int main2()
{
	//����func�����ķ���ֵ
	int* p = func1();
	dummy1();//����һ����������ջ

	cout << *p << endl; //�����������999������

	system("pause");
	return 0;
}