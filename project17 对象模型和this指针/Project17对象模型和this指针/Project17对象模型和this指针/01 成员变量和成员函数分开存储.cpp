#include <iostream>
using namespace std;

//成员变量 和 成员函数 分开存储
class Person1 
{
	int m_A;//非静态成员变量

	static int m_B;//静态成员变量

	void func() {} //非静态成员函数，不属于类对象上

	static void func2() {}//静态成员函数，不属于类对象上
};
int Person1::m_B = 0; // 类内声明，类外初始化

void test101() 
{
	Person1 p;
	//空对象占用内存空间为 1
	//编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象 也应该有一个 独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test102() 
{
	Person1 p;
	//多了一个非静态成员变量 ：int m_A,内存占用：4 
	cout << "size of p = " << sizeof(p) << endl;
	//侧面印证，非静态成员变量 在内存上属于对象
	//再多一个  静态成员变量，所占内存仍然是 4 ，侧面印证 静态成员变量 不属于某个对象
	//再多一个非静态成员函数，所占内存仍然是 4 ，侧面印证 非静态成员函数 不属于某个对象
	//再多一个  静态成员函数，所占内存仍然是 4 ，侧面印证 静态成员函数 不属于某个对象
}
int main1() 
{
	cout << "test 01" << endl;
	test101();
	cout << "test 02" << endl;
	test102();

	system("pause");
	return 0;
}
