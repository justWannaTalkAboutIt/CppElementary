#include <iostream>
using namespace std;
#include <string>

//������Ԫ

//����һ���������
class Building2;

class GoodGay2 
{
public:
	GoodGay2();
	void visit(); // �ιۺ���������Building2�е�����
	Building2* building;
};

class Building2 
{
	//GoodGay2 �Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay2;
public:
	Building2();
public:
	string m_SittingRoom;//����
private:
	string m_Bedroom;//����
};

//����д��Ա����
Building2::Building2() 
{
	m_SittingRoom = "����";
	m_Bedroom = "����";
}

GoodGay2::GoodGay2() 
{
	//�������������
	building = new Building2;
}

void GoodGay2::visit() 
{
	cout << "�û��������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ� " << building->m_Bedroom << endl;

}

//���Ժ���
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