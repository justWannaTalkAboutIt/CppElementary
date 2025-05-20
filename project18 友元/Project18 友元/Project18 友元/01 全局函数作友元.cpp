#include <iostream>
using namespace std;
#include <string>

//建筑物
class Building1
{
	//goodGay全局函数 是 Building1 好朋友，可以访问Building1中私有成员
	friend void goodGay(Building1* Building1);

public:
	Building1()
	{
		m_sittingRoom = "客厅";
		m_bedroom = "卧室";
	}
public:
	string m_sittingRoom;
private:
	string m_bedroom;
};

//全局函数
void goodGay(Building1* Building1)
{
	cout << "好基友 全局函数正在访问： " << Building1->m_sittingRoom << endl;
	cout << "好基友 全局函数正在访问： " << Building1->m_bedroom << endl; //成员 "Building1::m_bedroom" (已声明 所在行数:17) 不可访问

}

void test101()
{
	Building1 Building1;
	goodGay(&Building1);
}

int main1()
{
	test101();

	system("pause");
	return 0;
}