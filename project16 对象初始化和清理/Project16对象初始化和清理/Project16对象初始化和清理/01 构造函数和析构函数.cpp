#include <iostream>
using namespace std;

//对象的初始化和清理
//1.构造函数 进行初始化操作

class Person1 
{
public:
	//1、构造函数
	//没有返回值,不写void
	//函数名 与类目相同
	//构造函数可以有参数，可以发生重载
	//创建对象时，构造函数会自动调用，且只调用一次
	Person1() 
	{
		cout << "Person1 构造函数的调用" << endl;
	}
	//2、析构函数 进行清理
	//没有返回值，不写void
	//函数名和类名 相同，在名称前加~
	//析构函数不可以有参数，不可以重载
	//对象在销毁前 会自动调用析构函数，且只会调用一次
	~Person1() 
	{
		cout << "Person1 的析构函数调用" << endl;
	}
};
//2.析构函数 进行清理

void test01() 
{
	Person1 p;
}
int main1() 
{
	test01();
	//函数中的对象 是存储在栈上的数据
	//函数执行完毕后，会释放
	//构造和函数都是必须有的，如果我们自己不提供，编译器会提供一个空实现的构造和析构
	Person1 p1;
	//需要加delete 才能打印析构函数
	system("pause");
	return 0;
}