#include<iostream>
using namespace std;
#include<string>
#include<vector>

//使用vertor存储自定义数据类型

class Person2 
{
public:
	//构造函数：无参
	Person2() {}
	//构造函数：有参
	Person2(string name,int age)
	{
		this->m_Name = name;
		this->m_age = age;
	}
	string m_Name;
	int m_age;
};

//test
void test201() 
{
	//先准备好容器
	vector<Person2>v; //默认情况下不要指定大小,应该依靠vector的扩容机制
	
	//再创建Person2对象
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);

	//把对象装进容器里
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器
	//那么问题来了，*it是啥？
	for (vector<Person2>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "姓名："<< (*it).m_Name << "年龄："<<(*it).m_age << endl;
	}
}

//存放自定义类型的指针
void test202()
{
	//首先准备好容器
	vector<Person2*> v;
	//其次创建对象
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);

	//这里有些不一样，要把创建对象的指针装进容器里
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历
	for (vector<Person2*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "::姓名：" << (*it)->m_Name << "年龄：" << (*it)->m_age << endl;
	}
}

int main2() 
{
	//test201();
	test202();
	system("pause");
	return 0;
}