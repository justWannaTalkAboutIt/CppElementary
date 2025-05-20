#include <iostream>
using namespace std;

int main2()
{
	//整型 short （2），int (4), long (4),long long (4)
	// 可以利用sizeof求得变量所占内存空间大小
	
	short num1 = 10;
	cout << "short 占用内存空间为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int 占内存空间为：" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "long占内存空间为：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long 占内存空间为：" << sizeof(num4) << endl;

	system("pause");
	return 0;
}