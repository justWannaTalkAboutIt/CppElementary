#include<iostream>
using namespace std;

//栈区 注意：不要返回局部变量地址
//栈区数据由编译器管理开辟和释放

int* func1() 
{
	int a = 10; // 局部变量地址
	cout << "局部变量 存放在栈区，函数执行完后自动释放" << endl;
	return &a;//返回局部变量的地址
}

void dummy1() 
{
	int x = 999;
	cout << "x地址：" << &x << endl;
}
int main2()
{
	//接收func函数的返回值
	int* p = func1();
	dummy1();//调用一个函数覆盖栈

	cout << *p << endl; //可能输出数据999或乱码

	system("pause");
	return 0;
}