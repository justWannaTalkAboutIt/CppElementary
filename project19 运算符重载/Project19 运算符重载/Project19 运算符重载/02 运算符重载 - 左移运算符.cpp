#include <iostream>
using namespace std;

//左移运算符重载
class Person2 
{
	friend ostream& operator<<(ostream& cout,Person2& p);
public:
	Person2(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:

	//1、利用成员函数重载 左移运算符 p.operator<<(cout) 会变成 p<<cout	
	//		结果不是很喜闻乐见
	int m_A;
	int m_B;
};

//比较喜闻乐见的重载运算符是 全局函数 重载左移运算符
//void operator<<(ostream & cout, Person2& p) 
//{
//	cout << "p.m_A: " << p.m_A << " " << p.m_B << endl;
//}

//以上版本虽然可以使cout<<p生效合法， 但却不能使用cout<<p<<endl
//原因是返回值不合格，需要返回一个与cout相同的ostream类
//改进如下
ostream& operator<<(ostream& cout,Person2& p)
{
	cout << "p.m_A :" << p.m_A << " p.m_B : " << p.m_B << endl;
	return cout;
}

void test201() 
{
	Person2 p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	//cout << p.m_A << endl;
	//cout << p;//若没有重载，则报错：没有与这些操作数匹配的 "<<" 运算符
	cout << p; // 合法
	cout << p << endl;// 修改了返回值后也合法，符合链式编程对返回值的要求
}
int main2() 
{
	test201();

	system("pause");
	return 0;
}