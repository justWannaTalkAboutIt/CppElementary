#include <iostream>
using namespace std;

//������
class Person4 
{
public:
	//this ָ��ı����� ָ�볣�� ָ���ָ���ǲ����Ըı��
	//this = Person4* const this;��const���൱�� const Person4* const this
	//�ڳ�Ա�������const�����ε���thisָ����ָ��ָ���ֵҲ���ɸı�
	void showPerson4() const 
	{
		m_B = 100;
		//this->m_A = 100;
		//this = NULL; this ָ�벻�����޸�ָ��ָ���
	}

	void showPerson4NoConst() 
	{
	}

	int m_A;
	mutable int m_B;
};

void test401() 
{
	Person4 p;
	p.showPerson4();
}

//������
void test402() 
{
	const Person4 p;
	p.m_B = 200; // ����mutable�����޸�
	//p.m_A = 199;//���ʽ�����ǿ��޸ĵ���ֵ
	//������ֻ�ܵ��ó�����
	p.showPerson4();
	//p.showPerson4NoConst();//���������Ա ���� "Person4::showPerson4NoConst" �����ݵ������޶���
	//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����ԣ������������ڱ��ֶ��󲻱�
}
int main4() 
{
	test402();

	system("pause");
	return 0;
}