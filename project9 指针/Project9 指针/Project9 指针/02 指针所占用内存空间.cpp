#include <iostream>
using namespace std;

int main2()
{
	//ָ����ռ���ڴ�ռ�
	int a = 10;
	int* p;
	p = &a;

	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;

	cout << "x86����32λϵͳ��32λϵͳ��ָ��ռ4���ֽڣ�32Bit" << endl;
	cout << "x64����64λϵͳ��64λϵͳ��ָ��ռ8���ֽڣ�64bit" << endl;

	system("pause");
	return 0;
}