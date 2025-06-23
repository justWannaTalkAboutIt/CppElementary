#include <iostream>
using namespace std;

//模板局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式作特殊实现
//有点像运算符重载

class Person 
{
public:
	Person(string name, int age) 
	{
		this->name = name;
		this->age = age;
	}
	//姓名
	string name;
	//年龄
	int age;
};

//对比两个数据是否相等的函数
template <typename T>
bool myCompare(T& a,T& b)
{
	if (a == b)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//利用具体化的Person版本实现代码，具体化优先调用
template<> bool myCompare(Person& p1, Person& p2) //template<>表明是模板的具体化重载函数
{
	if (p1.name == p2.name && p1.age == p2.age) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}


void test601()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a,b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else 
	{
		cout << "a != b" << endl;

	}
}


void test602()
{
	Person p1 = { "Tom",10 };
	Person p2 = { "Tom",10 };

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main() 
{
	//test601();
	test602(); //二进制“==”:“T”不定义该运算符或到预定义运算符可接收的类型的转换
	system("pause");
	return 0;
}
//学习模板并不是为了写模板，而是在STL能够运用系统提供的模板