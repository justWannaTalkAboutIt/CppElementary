#include <iostream>
using namespace std;

//类模板中成员函数创建时机
//类模板中成员函数调用时才去创建

class Person31 
{
public:
	void showPerson31() 
	{
		cout << "Person31 show" << endl;
	}
};

class Person32
{
public:
	void showPerson32()
	{
		cout << "Person32 show" << endl;
	}
};

template <class T>
class MyClass 
{
public:
	T obj;
	//类模板中的成员函数
	void func1()
	{
		obj.showPerson31();
	}
	void func2() 
	{
		obj.showPerson32();
	}
};
//类模板中的成员函数的创建时机
//类模板中的成员函数一开始创建不出来，是因为obj确定不了类型
//直到你去【调用】的时候，类模板中的成员函数才确定T类型
//才能知道成员函数能不能调起来

void test301() 
{
	MyClass<Person31>m;
	m.func1();
	//m.func2();//"showPerson32": 不是 "Person31" 的成员
}

int main3() 
{
	test301();
	system("pause");
	return 0;
}