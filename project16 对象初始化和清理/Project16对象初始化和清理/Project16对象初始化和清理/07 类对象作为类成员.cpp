#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա
class Phone 
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone���캯���ĵ���" << endl;
	}
	~Phone() 
	{
		cout << "Phone ���������ĵ���" << endl;
	}

	//Ʒ��
	string m_PName;
	
};


class Person 
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person ���캯���ĵ���" << endl;
	}
	~Person() 
	{
		cout << "Person �������� ����" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};

//�������������Ϊ�����Ա������ʱ�ȹ��죨��Ա��������ٹ�������
//����˳���빹��˳���෴��ջ���� �����������࣬��������Ա�������
void test701() 
{
	Person p("����","ƻ��MAX");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}

int main7() 
{
	test701();
	system("pause");
	return 0;
}