#include <iostream>
using namespace std;

//函数运算符重载
class MyPrint 
{
public:
	//重载函数调用运算符
	void operator ()(string test) 
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}

void test601() 
{
	MyPrint myPrint;
	myPrint("hello world");
	//由于使用起来非常类似 函数调用，因此称为仿函数
	MyPrint02("hello world");
}

//仿函数十分灵活，没有固定的写法
class MyAdd 
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test602() 
{
	MyAdd myAdd;
	int ret = myAdd(100,100);
	cout << "ret = " << ret << endl;

	//匿名对象
	cout << "匿名对象 MyAdd: " << MyAdd()(100, 100) << endl;
}
int main() 
{
	test601();
	test602();

	system("pause");
	return 0;
}