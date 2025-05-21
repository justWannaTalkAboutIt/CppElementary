#include <iostream>
using namespace std;

//继承中的构造和析构顺序
class Base4 
{
public:
	Base4()
	{
		cout << "Base4 的构造函数！" << endl;
	}
	~Base4() 
	{
		cout << "Base4 的析构函数！" << endl;
	}
};

class Son4 : public Base4 
{
public:
	Son4()
	{
		cout << "Son4 的构造函数！" << endl;
	}
	~Son4()
	{
		cout << "Son4 的析构函数！" << endl;
	}
};
void test401() 
{
	//Base4 b;
	Son4 s;
	//继承中的构造和析构顺序如下
	//先构造父类，在构造子类，
	//析构顺序和构造顺序相反
}

int main4() 
{
	test401();

	system("pause");
	return 0;
}