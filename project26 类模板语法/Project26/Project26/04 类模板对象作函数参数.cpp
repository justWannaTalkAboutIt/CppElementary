#include <iostream>
using namespace std;
#include <string> 

//类模板对象作函数参数
//1 指定传入类型
//2 参数模板化
//3 整个类模板化

template <class T1,class T2>
class Person4
{
public:
	Person4(T1 name, T2 age) 
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson4() 
	{
		cout << "姓名：" << this->m_name << "年龄：" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1 指定传入类型
void printPerson4(Person4<string,int>&p) //类模板对象作函数参数
{
	p.showPerson4();
}

void test401() 
{
	Person4<string, int>p("孙悟空",100);
	printPerson4(p);
}

//2 参数模板化
template <class T1,class T2>
void printPerson42(Person4<T1,T2>&p) 
{
	p.showPerson4();
	cout << "T1 的类型为：" << typeid(T1).name() << endl;
	cout << "T2 的类型为：" << typeid(T2).name() << endl;

}

void test402() 
{
	Person4<string, int>p("猪八戒", 100);
	printPerson42(p);
}

//3 整个类模板化(放弃治疗版)
template<class T> //爱传啥传啥吧
void printPerson43(T& p) 
{
	p.showPerson4();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}

void test403() 
{
	Person4<string, int>p("唐僧",30);
	printPerson43(p);
}

int main4() 
{
	//test401();
	//test402();
	test403(); 
	system("pause");
	return 0;
}