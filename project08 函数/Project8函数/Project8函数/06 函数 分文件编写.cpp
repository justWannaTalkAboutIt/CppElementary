#include <iostream>
using namespace std;
#include "swap.h"

int main()
{
	cout << "函数的分文件编写" << endl;
	cout << "1、创建.h后缀名的头文件" << endl;
	cout << "2、创建.cpp后缀名的源文件" << endl;
	cout << "3、在.h中写函数声明" << endl;
	cout << "4、在.cpp中写函数的定义，并#include 双引号.h头文件名双引号 " << endl;
	cout << endl;

	cout << "使用时在main函数中 #include 双引号此.h头文件双引号" << endl;
	cout << "注意在.h头文件中应该#include引用其他所使用的头文件" << endl;
	int a = 10;
	int b = 20;
	swap(a, b);

	system("pause");
	return 0;
}


