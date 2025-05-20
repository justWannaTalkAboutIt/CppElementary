#include <iostream>
using namespace std;
#include <string>

//成员函数作友元
class Building;

class GoodGay 
{
public:
	GoodGay();

	void visit();  //让visit函数   可以访问Building中的私有成员
	void visit2(); //让visit2函数不可以访问Building中的私有成员

	Building* building;
};

class Building 
{
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_Bedroom;//卧室
};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}
GoodGay::GoodGay() 
{
	building = new Building();
}
void GoodGay::visit() 
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_Bedroom << endl;

}
void GoodGay::visit2() 
{
	cout << "visit 2 函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit函数正在访问：" << building->m_Bedroom << endl;//非友元函数不能访问private

}

//测试函数
void test301() 
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}
int main() 
{
	test301();

	system("pause");
	return 0;
}