#include <iostream>
using namespace std;

int* func3() 
{
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	int* p = new int(10);
	return p;
}

void dummy() 
{
	int x = 10;
	cout << "x��ַ��" << endl;
}

int main3()
{
	//�ڶ�����������
	int* p = func3();
	dummy();

	cout << *p << endl; 
	cout << *p << endl;
	system("pause");
	return 0;
}