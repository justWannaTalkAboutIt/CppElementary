#include <iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н�������
void swap3(int num1,int num2) 
{
	//��ӡ
	cout << "(�β�)����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << endl;

	//����
	int temp = num1;
	num1 = num2;
	num2 = temp;

	//��ӡ
	cout << "(�β�)������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << endl;

	return;
}

int main3()
{
	cout << "ֵ���� ָ���� �β� �� ʵ�� ֮���ֵ����" << endl;
	cout << "ʵ�� �ڽ��뺯��ʱ��ֵ���ݸ� �β�" << endl;
	cout << "���ں����ڶ� �β� �������κα任����Ӱ�쵽 ʵ��" << endl;
	cout << endl;
	int a = 10;
	int b = 20;
	swap(a, b);

	//��ӡ
	cout << "(ʵ��)������" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}