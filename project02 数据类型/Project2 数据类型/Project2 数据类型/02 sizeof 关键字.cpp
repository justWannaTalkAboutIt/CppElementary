#include <iostream>
using namespace std;

int main2()
{
	//���� short ��2����int (4), long (4),long long (4)
	// ��������sizeof��ñ�����ռ�ڴ�ռ��С
	
	short num1 = 10;
	cout << "short ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int ռ�ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ�ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long ռ�ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	system("pause");
	return 0;
}