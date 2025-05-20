#include <iostream>
using namespace std;

//运算符重载 - 加号
class Person1 
{
public:
	//1、成员函数 重载加号
	Person1 operator+ (Person1& p) 
	{
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};

//2、全局函数 重载加号
Person1 operator+(Person1& p1, Person1& p2)
{
	Person1 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

// 加号重载的 函数重载
Person1 operator+(Person1& p1, int num)
{
	Person1 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test101() 
{
	Person1 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1 p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//Person1 p3 = p2 + p1;//若未定义，报错没有与这些操作数匹配的 "+" 运算符
	
	//全局函数的本质调用
	//Person1 p3 = operator+(p1,p2);

	//成员函数的本质调用
	Person1 p3 = p1.operator+(p2);
	
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	
	//运算符重载 也可以发生 函数重载
	//即同一函数名，但参数类型不同
	Person1 p4 = p1 + 15;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main1() 
{
	test101();

	system("pause");
	return 0;
}