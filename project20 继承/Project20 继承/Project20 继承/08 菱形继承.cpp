#include <iostream>
using namespace std;

//菱形继承

class Animal 
{
public:
	int m_Age;
};

//采用虚继承 来解决菱形继承带来的成员属性重复开销内存的问题
//继承之前加关键字 virtual 变虚继承
//Animal 则对应称为虚基类
class Sheep : virtual public Animal 
{
};
class Tuo : virtual public Animal 
{
};

class SheepTuo: public Sheep, public Tuo
{
};

void test801() 
{
	SheepTuo st;
	
	//st.m_Age = 18;//报错 "SheepTuo::m_Age" 不明确;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当出现菱形继承，两个父类拥有相同数据，需要加以作用域 来区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//但菱形继承导致一个年龄属性有两份开销，浪费内存
	//利用虚继承 解决菱形继承的问题
	//当发生虚继承之后，可以使用
	cout << "st.m_Age = " << st.m_Age << endl;
}
int main() 
{
	test801();

	system("pause");
	return 0;
}