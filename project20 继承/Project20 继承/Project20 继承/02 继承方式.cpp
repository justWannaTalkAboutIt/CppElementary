#include <iostream>
using namespace std;

//继承方式
class Base1 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1 
{
public:
	void func() 
	{
		m_A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10; // 父类中的私有权限成员 子类访问不到
	}
};
//保护继承
class Base2 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 
{
public:
	void func() 
	{
		m_A = 100;//父类中公共成员，到子类中变为保护权限
		m_B = 100;//父类中保护成员，到子类中变为保护权限
		//m_C = 100;//子类访问不到
	}
};
//私有继承
class Base3 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3 
{
public:
	void func() 
	{
		m_A = 100;//父类中公共成员，到子类变成私有成员
		m_B = 100;//父类中保护成员，到子类变成保护成员
		//m_C = 100;//父类私有成员，子类访问不到	
	}
};
class Grandson3 :public Son3 
{
public:
	void func()
	{
		//m_A = 100;//到了son3中，m_A等都已经收紧为私有，即使孙子以public方式继承，也无法访问
	}
};

//测试函数
void test201()
{
	Son1 son1;
	son1.m_A = 100;
	//son1.m_B = 100;//到son1中，m_B是保护权限，类外访问不到
}
void test202() 
{
	Son2 son2;
	//son2.m_A = 100; //到son2中，m_A被收紧成保护权限，类外访问不到
	//son2.m_B = 100;//m_B 始终是保护权限，不可以访问
}
void test203() 
{
	Son3 son3;
	//son3.m_A = 1000; // 到son3中，m_A被收紧成 私有权限，类外访问不到
	//son3.m_B = 1000; // 到son3中，m_B被收紧成 私有权限，类外访问不到
}
int main2() 
{
	test201();
	test202();
	test203();

	system("pause");
	return 0;
}