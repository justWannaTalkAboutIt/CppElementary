#include <iostream>
using namespace std;
#include <string>

//类作友元

//先作一下类的声明
class Building2;

class GoodGay2 
{
public:
	GoodGay2();
	void visit(); // 参观函数，访问Building2中的属性
	Building2* building;
};

class Building2 
{
	//GoodGay2 是本类的好朋友，可以访问本类中私有成员
	friend class GoodGay2;
public:
	Building2();
public:
	string m_SittingRoom;//客厅
private:
	string m_Bedroom;//卧室
};

//类外写成员函数
Building2::Building2() 
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}

GoodGay2::GoodGay2() 
{
	//创建建筑物对象
	building = new Building2;
}

void GoodGay2::visit() 
{
	cout << "好基友类正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问： " << building->m_Bedroom << endl;

}

//测试函数
void test201() 
{
	GoodGay2 gg;
	gg.visit();
}

int main2() 
{
	test201();

	system("pause");
	return 0;
}