#include <iostream>
using namespace std;

//����Ĭ�ϲ���
int func(int a, int b=20, int c=30) 
{
	return a + b + c;
}

//int func2(int a = 10, int b, int c)
//{
//	return a + b + c;//��func2��: ȱ���β� 2 ��Ĭ��ʵ��
//	cout << "���ĳ��λ����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ" << endl;
//}

//int func3(int a=10, int b=10); //��func3��: �ض���Ĭ�ϲ��� : ���� 1
int func3(int a, int b);
int func3(int a=10, int b=10)
{
	return a + b;
	cout << "�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���" << endl;
	cout << "������ʵ���У�ֻ����һ����Ĭ�ϲ�����������ζ�������Ķ�����" << endl;
}


int main1()
{
	cout << func(10,20,30) << endl;

	cout << func(10) << endl;

	cout << func3(10,10) << endl;

	system("pause");
	return 0;
}