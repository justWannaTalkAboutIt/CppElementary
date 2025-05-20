#include <iostream>
using namespace std;
//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象

//2、值传递的方式给函数参数传值

//3、值方式返回局部对象

class Person3
{
public:
	Person3()
	{
		cout << "Person3默认构造函数调用" << endl;
	}

	Person3(int age)
	{
		cout << "Person3有参构造函数调用" << endl;
		m_Age = age;
	}

	Person3(const Person3& p)
	{
		cout << "Person3拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person3()
	{
		cout << "Person3析构函数调用" << endl;
	}
	int m_Age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test1() 
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2的年龄为：" << p2.m_Age << endl;
}
//2、值传递的方式给函数参数传值
void doWork(Person3 p)
{
}
void test2() 
{
	Person3 p;
	doWork(p);
}

//3、值方式返回局部对象
Person3 doWork3()
{
	Person3 p1;
	Person3 p2;
	cout << (int*)&p1 << endl;
	cout << (int*)&p2 << endl;

	return rand()>0.5?p1:p2;
}
void test3() 
{
	Person3 p = doWork3();
	cout << (int*)&p << endl;
}

int main3() 
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}