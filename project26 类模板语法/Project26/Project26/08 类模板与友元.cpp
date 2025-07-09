#include <iostream>
using namespace std;
#include <string>

//类模板配合友元函数的类内和类外实现
//通过全局函数打印Person信息
	//1 全局函数类内实现 - 直接在类内声明友元函数即可
	//2 全局函数类外实现 - 需要提前让编译器知道全局函数的存在

//先需要让编译器知道有这个类
template<class T1, class T2>
class Person8; 

//全局友元函数类外实现需要写在类实现前面
template<class T1, class T2>
void printPerson82 (Person8<T1, T2>& p)
{
	cout << p.m_name << " Age: " << p.m_age << endl;
}

template <class T1,class T2>
class Person8 
{
	//全局函数 类内实现 记得加friend
	friend void printPerson81(Person8<T1,T2>& p) 
	{
		cout << "Name: " << p.m_name << " Age: " << p.m_age << endl;
	}
	//全局函数类内声明，类外实现
	//加一个空模板参数列表，以和类外函数模板实现保持一致
	friend void printPerson82<>(Person8<T1,T2>& p); //变成了函数模板，需要提前让编译器知道，所以需要让函数实现写在类实现前

public:

	Person8(T1 name,T2 age) //构造函数还是要写在public下，否则没法初始化对象
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//1 全局函数在类内实现
void test801() 
{
	Person8<string, int> p("Tom", 20);
	printPerson81(p);
}

//2 全局函数在类内声明在类外实现
void test802() 
{
	Person8<string, int> p("Jerry",18);
	printPerson82(p);
}


int main8()
{
	test801();
	test802();
	system("pause");
	return 0;
}
