#include <iostream>
using namespace std;

int main2()
{
	//指针所占用内存空间
	int a = 10;
	int* p;
	p = &a;

	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;

	cout << "x86代表32位系统，32位系统内指针占4个字节，32Bit" << endl;
	cout << "x64代表64位系统，64位系统内指针占8个字节，64bit" << endl;

	system("pause");
	return 0;
}