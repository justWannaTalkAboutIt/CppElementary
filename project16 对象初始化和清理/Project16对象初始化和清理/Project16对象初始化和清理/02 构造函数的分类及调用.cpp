#include <iostream>
using namespace std;

//构造函数的分类及调用
//分类
//		按照参数分类：无参构造（默认）  和 有参构造
//		按照类型分类：普通构造			和 拷贝构造
class Person2 
{
public:
	Person2() 
	{
		cout << "Person2的构造函数调用" << endl;
	}
	Person2(int a) 
	{
		age = a;
		cout << "Person2的有参构造调用" << endl;
	}
	//拷贝构造，按照某对象拷贝一份
	Person2(const Person2& p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Person2 的拷贝构造调用" << endl;
	}
	~Person2() 
	{
		cout << "Person2的析构函数调用" << endl;
	}
	int age;
};

void test02() 
{
	//1、括号法
	//Person2 p1; //默认构造函数调用
	//Person2 p2(10); // 有参函数调用
	//Person2 p3(p2); // 拷贝构造函数

	//cout << "p2 的年龄为：" << p2.age << endl;
	//cout << "p3 的年龄为：" << p3.age << endl;
	//cout << "注意事项1：" << endl;
	//cout << "调用默认构造函数时，不要加()小括号" << endl;
	//cout << "Person2 p1() 编译器会认为是一个函数声明" << endl;

	//2、显示法
	Person2 p1;
	Person2 p2 = Person2(10);//有参构造
	Person2 p3 = Person2(p2);//拷贝构造

	//Person2(10); // 匿名对象，当前执行结束后，系统会立即回收匿名对象
	//cout << "aaaaa" << endl;
	
	//cout << "注意事项2：" << endl;
	cout << "不要利用拷贝构造函数 初始化 匿名对象" << endl;
	//cout << "编译器会认为 Person2 (p3) == Person2 p3是一个对象声明，所以涉及重定义" << endl;

	//3、隐式转换法
	Person2 p4 = 10; //相当于 写了 Person2 p4 = Person2(10); //有参构造
	Person2 p5 = p4; //拷贝构造
}

int main22()
{
	test02();
	system("pause");
	return 0;
}