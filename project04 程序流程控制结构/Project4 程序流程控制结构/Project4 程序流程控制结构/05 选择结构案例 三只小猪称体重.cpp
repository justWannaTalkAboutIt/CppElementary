#include <iostream>
using namespace std;

int main5()
{
	//��ֻС������أ��Ƚ�A,B,C˭����
	// ���ж�A��B˭�أ�A�� �Ƚ�A ��C��A�أ������A����
	//                                C�أ������C����
	//                 B�� �Ƚ�B��C�� B�أ����B����
	//                                C�أ����C����
	
	//1��������ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2�����û�������ֻС�������
	cout << "������С��A�����أ�" << endl;
	cin >> num1;

	cout << "������С��B�����أ�" << endl;
	cin >> num2;

	cout << "������С��C�����أ�" << endl;
	cin >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	//3���ж�
	if (num1>num2) 
	{
		if (num1>num3) 
		{
			cout << "A����" << endl;
		}
		else if (num1 < num3)
		{
			cout << "C����" << endl;
		}
		else
		{
			cout << "A��C ����" << endl;
		}
	}
	else if (num1 < num2)
	{
		if (num2 > num3)
		{
			cout << "B����" << endl;
		}
		else if (num2 < num3)
		{
			cout << "C����" << endl;
		}
		else
		{
			cout << "B��C����" << endl;
		}
	}
	else
	{
		if (num1 > num3)
		{
			cout << "A��B����" << endl;
		}
		else if (num1 < num3)
		{
			cout << "C����" << endl;
		}
		else 
		{
			cout << "A B C һ����" << endl;
		}
	}
	system("pause");
	return 0;
}