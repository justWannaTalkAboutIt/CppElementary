#include <iostream>
using namespace std;
#include <string>

//������
class Building1
{
	//goodGayȫ�ֺ��� �� Building1 �����ѣ����Է���Building1��˽�г�Ա
	friend void goodGay(Building1* Building1);

public:
	Building1()
	{
		m_sittingRoom = "����";
		m_bedroom = "����";
	}
public:
	string m_sittingRoom;
private:
	string m_bedroom;
};

//ȫ�ֺ���
void goodGay(Building1* Building1)
{
	cout << "�û��� ȫ�ֺ������ڷ��ʣ� " << Building1->m_sittingRoom << endl;
	cout << "�û��� ȫ�ֺ������ڷ��ʣ� " << Building1->m_bedroom << endl; //��Ա "Building1::m_bedroom" (������ ��������:17) ���ɷ���

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