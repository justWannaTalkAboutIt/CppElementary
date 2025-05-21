#include <iostream>
using namespace std;

//纯虚函数 和 抽象类

class Base 
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类 称为抽象类
	//抽象类特点：1、无法实例化对象 2、子类必须重写虚函数，否则也属于虚函数
	virtual void func() = 0;
};

class Son : public Base 
{
public:
	void func() 
	{
		cout << "func 在调用" << endl;
	}
};

void test301() 
{
	//抽象类无法实例化对象
	//Base b;//不允许使用抽象类类型 "Base" 的对象:
	//new Base;//不允许使用抽象类类型 "Base" 的对象:
	//Son s;
	//new Son(); //子类必须重写父类方法，才能实例化对象
	Base* b = new Son();//为达到多态的效果，父类指针 指向子类对象
	b->func();
}
int main3() 
{
	test301();
	system("pause");
	return 0;
}