#include <iostream>
using namespace std;

//this指针的使用
//1、解决名称冲突
//2、返回对象本身用*this
class Person2 
{
public:
	Person2(int age)
	{
		//this指针指向的是 被调用的成员函数 所属的对象
		//简言之，谁调 就指谁
		this->age = age;
	}

	Person2& Person2AddAge(const Person2& p)
	{
		this->age += p.age;
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}

	int age;
};

void test201() 
{
	Person2 p1(18);
	cout << "p1 的年龄为：" << p1.age << endl;
}

void test202() 
{
	Person2 p1(10);

	Person2 p2(10);

	p2.Person2AddAge(p1).Person2AddAge(p1).Person2AddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}
int main2() 
{
	cout << "-------test01" << endl;
	test201();
	cout << "-------test02" << endl;
	test202();

	system("pause");
	return 0;
}