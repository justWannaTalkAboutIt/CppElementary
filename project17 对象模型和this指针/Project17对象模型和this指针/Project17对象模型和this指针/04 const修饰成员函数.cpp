#include <iostream>
using namespace std;

//常函数
class Person4 
{
public:
	//this 指针的本质是 指针常量 指针的指向是不可以改变的
	//this = Person4* const this;加const后相当于 const Person4* const this
	//在成员函数后加const，修饰的是this指向，让指针指向的值也不可改变
	void showPerson4() const 
	{
		m_B = 100;
		//this->m_A = 100;
		//this = NULL; this 指针不可以修改指针指向的
	}

	void showPerson4NoConst() 
	{
	}

	int m_A;
	mutable int m_B;
};

void test401() 
{
	Person4 p;
	p.showPerson4();
}

//常对象
void test402() 
{
	const Person4 p;
	p.m_B = 200; // 加了mutable可以修改
	//p.m_A = 199;//表达式必须是可修改的左值
	//常对象只能调用常函数
	p.showPerson4();
	//p.showPerson4NoConst();//对象含有与成员 函数 "Person4::showPerson4NoConst" 不兼容的类型限定符
	//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性，而常函数意在保持对象不变
}
int main4() 
{
	test402();

	system("pause");
	return 0;
}