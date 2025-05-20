#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员
class Phone 
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone构造函数的调用" << endl;
	}
	~Phone() 
	{
		cout << "Phone 析构函数的调用" << endl;
	}

	//品牌
	string m_PName;
	
};


class Person 
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person 构造函数的调用" << endl;
	}
	~Person() 
	{
		cout << "Person 析构函数 调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

//当其他类对象作为本类成员，构造时先构造（成员）类对象，再构造自身
//析构顺序与构造顺序相反（栈）， 先析构整体类，再析构成员（类对象）
void test701() 
{
	Person p("张三","苹果MAX");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}

int main7() 
{
	test701();
	system("pause");
	return 0;
}