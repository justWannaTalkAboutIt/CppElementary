#include <iostream>
using namespace std;
#include <string>

//虚析构和纯虚析构
class Animal 
{
public:
	Animal() 
	{
		cout << "Animal构造函数调用" << endl;
	}
	//纯虚函数（比虚函数+2元的纯虚函数，比较抽象，不能直接实例化对象）
	virtual void speak() = 0;
	//Animal的析构函数
	/*virtual ~Animal() 
	{
		cout << "Animal析构函数调用 - by虚析构" << endl;
	}*/
	//纯虚析构:记得类外实现，因为回收垃圾是一定要做的事情，所以无论是虚析构还是纯虚析构，一定要有实现。
	virtual ~Animal() = 0;//纯虚析构按照规矩在类外实现
};
Animal:: ~Animal() 
{
	cout << "Animal析构函数调用- by纯虚析构" << endl;
}

class Cat :public Animal 
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name); //利用传进来的name变量，在堆区new开辟空间
		//有了开辟就有了释放，于是考虑到析构函数
	}
	void speak() 
	{
		cout << *m_Name << "*^-^*小猫在说话" << endl;
	}
	~Cat() 
	{ //有了new开辟就有了释放，于是考虑到析构函数
		if (m_Name!=NULL) //析构要判断指针是否为空
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;//若为空则需要删除指针，释放空间
			m_Name = NULL;//然后将指针置空
		}
	}
	string* m_Name; //定义一个字符串指针 来维护 姓名这个成员变量
};
//测试函数
void test501() 
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时不会调用子类的析构函数，导致子类如果有堆区属性会出现内存泄露
	delete animal;//为解决此问题，出现了虚析构，以使父类析构时，连带走子类析构
}
int main5() 
{
	test501();

	system("pause");
	return 0;
}