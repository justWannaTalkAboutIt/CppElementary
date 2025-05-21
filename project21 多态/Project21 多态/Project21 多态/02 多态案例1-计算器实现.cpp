#include <iostream>
using namespace std;
#include <string>
//分别利用 普通写法 和 多态 实现计算器

//普通写法
class Calculator 
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}// 如果需要扩展新的功能，必须修改源码，
		else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}//除法修改一次源码
		//乘方修改一次源码
		//... ...
		// 这样的结构实在不利于我们开发和维护
		//实际在开发中，遵循开闭原则，即：对扩展进行开放，对修改进行关闭
	}

	int m_Num1;
	int m_Num2;
};
//利用多态实现计算器
//实现计算器抽象类
class AbstractCalc
{
public:
	virtual int getResult() 
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalc :public AbstractCalc 
{
public:
	int getResult() 
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubtractCalc :public AbstractCalc
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalc :public AbstractCalc
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

//测试案例
void test201() 
{
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
}

void test202() 
{
	//多态使用条件：父类指针 指向子类对象
	AbstractCalc* abc = new AddCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;

	//减法
	abc = new SubtractCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;

	//乘法
	abc = new MulCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;
	
}
int main2() 
{
	test201();
	test202();

	system("pause");
	return 0;
}