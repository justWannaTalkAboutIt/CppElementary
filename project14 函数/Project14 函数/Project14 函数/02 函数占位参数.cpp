#include <iostream>
using namespace std;


//目前占位参数还用不到，后面课程会用到
//占位参数有默认参数
void func(int a,int) 
{
	cout << "this is func" << endl;
}

void func1(int a,int = 10) 
{
	cout << "this is func1" << endl;
}

int main2() 
{

	func(10,10);
	func1(10);

	system("pause");
	return 0;
}