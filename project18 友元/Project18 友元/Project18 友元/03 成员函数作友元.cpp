#include <iostream>
using namespace std;
#include <string>

//��Ա��������Ԫ
class Building;

class GoodGay 
{
public:
	GoodGay();

	void visit();  //��visit����   ���Է���Building�е�˽�г�Ա
	void visit2(); //��visit2���������Է���Building�е�˽�г�Ա

	Building* building;
};

class Building 
{
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_Bedroom;//����
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_Bedroom = "����";
}
GoodGay::GoodGay() 
{
	building = new Building();
}
void GoodGay::visit() 
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_Bedroom << endl;

}
void GoodGay::visit2() 
{
	cout << "visit 2 �������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit�������ڷ��ʣ�" << building->m_Bedroom << endl;//����Ԫ�������ܷ���private

}

//���Ժ���
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