#include <iostream>
using namespace std;

//打印数据的函数
void showValue(const int &val) 
{
	//val = 2000;
	cout << "val = " << val << endl;
}

int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作
	//int a = 10;
	//const int& ref = 10;//加const之后，编译器将代码修改 int temp=10;const int & ref = temp;
	//引用必须引用一块合法的内存空间
	//ref = 20; //加入const之后变为只读，不可以修改

	cout << "修饰形参来防止误操作" << endl;
	int a = 100;
	showValue(a);
	cout << "main a = " << a << endl;
	system("pause");
	return 0;
}