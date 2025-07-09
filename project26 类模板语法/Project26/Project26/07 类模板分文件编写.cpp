#include <iostream>
using namespace std;
#include <string>
//#include "Person.cpp" //第一种解决方式，直接包含.cpp源文件
#include "Person.hpp" 
//第二种解决方式，将.h文件内容和.cpp文件内容写到一起，
//重新命名为.hpp文件

//类模板文件编写问题
//template <class T1, class T2>
//class Person7
//{
//public:
//	Person7(T1 name, T2 age);
//
//	void showPerson7();
//
//	T1 m_name;
//	T2 m_age;
//};

//template <class T1,class T2>
//Person7<T1,T2>::Person7(T1 name,T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template <class T1, class T2>
//void Person7<T1,T2>::showPerson7() 
//{
//	cout << "Name: " << this->m_name << " Age: " << this->m_age << endl;
//}

//test 函数
void test701() 
{
	Person7<string, int> p("猪八戒", 299);
	p.showPerson7();
}
int main7() 
{
	test701();
	system("pause");
	return 0;
}