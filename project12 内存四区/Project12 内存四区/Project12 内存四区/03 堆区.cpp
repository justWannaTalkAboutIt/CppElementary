#include <iostream>
using namespace std;

int* func3() 
{
	//利用new关键字，可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}

void dummy() 
{
	int x = 10;
	cout << "x地址：" << endl;
}

int main3()
{
	//在堆区开辟数据
	int* p = func3();
	dummy();

	cout << *p << endl; 
	cout << *p << endl;
	system("pause");
	return 0;
}