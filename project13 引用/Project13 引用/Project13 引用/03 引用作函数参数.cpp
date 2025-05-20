#include <iostream>
using namespace std;

//交换函数：交换所给的两个参数的值
//1、值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "mySwap01 a = " << a << endl;
	cout << "mySwap01 b = " << b << endl;
}
//2、地址传递
void mySwap02(int* pa,int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
	cout << "mySwap02 a = " << *pa << endl;
	cout << "mySwap02 b = " << *pb << endl;
}
//3、引用传递
void mySwap03(int& a,int& b) 
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap03 a = " << a << endl;
	cout << "mySwap03 b = " << b << endl;

}
int main3()
{
	int a = 10;
	int b = 20;
	//1、值传递
	mySwap01(a,b);
	cout << "main mySwap01 a = " << a << endl;
	cout << "main mySwap01 b = " << b << endl;
	//2、地址传递
	mySwap02(&a,&b);
	cout << "main mySwap02 a = " << a << endl;
	cout << "main mySwap02 b = " << b << endl;
	//3、引用传递
	mySwap03(a,b);
	cout << "main mySwap03 a = " << a << endl;
	cout << "main mySwap03 b = " << b << endl;

	system("pause");
	return 0;
}