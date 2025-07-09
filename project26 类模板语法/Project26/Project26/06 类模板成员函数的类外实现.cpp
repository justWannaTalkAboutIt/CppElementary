#include <iostream>
using namespace std;

//类模板成员函数类外实现
template <class T1,class T2>
class Person6 
{
public:
	Person6(T1 name, T2 age);
		/*{
			this->m_name = name;
			this->m_age = age;
		}*/

	void showPerson6();
	/*{
		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
	}*/
	T1 m_name;
	T2 m_age;
};

//构造函数的类外实现
template <class T1, class T2>
Person6<T1,T2>::Person6(T1 name,T2 age) 
{
	this->m_name = name;
	this->m_age = age;
}

//成员函数的类外实现
template <class T1, class T2>
void Person6<T1, T2>::showPerson6() 
{
	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
}

//测试函数
void test601() 
{
	Person6<string, int> p("孙悟空", 100);
	p.showPerson6();
}

int main6() 
{
	test601();
	system("pause");
	return 0;
}