#include <iostream>
using namespace std;

//静态成员变量
class Person8 
{
public:
	//1、所有对象共享同一份数据
	//2、编译阶段就分配内存
	//3、类内声明， 类外初始化操作
	static int m_A;

	//静态成员变量也是有访问权限的
private:
	static int m_B;
};

int Person8::m_A = 100;
int Person8::m_B = 200;


void test801()
{
	Person8 p;
	cout << p.m_A << endl;

	Person8 p2;
	p2.m_A = 200;

	//100?200?
	cout << p2.m_A << endl;
	//cout << Person8::m_B << endl;//成员 "Person8::m_B" (已声明 所在行数:19) 不可访问

}
void test802() 
{
	//静态成员变量不属于某个对象，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1、通过对象进行访问
	Person8 p;
	cout << p.m_A << endl;
	//2、通过类名直接访问
	cout << Person8::m_A << endl;
}
int main8() 
{
	//test801();
	test802();

	system("pause");
	return 0;
}