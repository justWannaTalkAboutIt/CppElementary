#include <iostream>
using namespace std;

//��������� - �Ӻ�
class Person1 
{
public:
	//1����Ա���� ���ؼӺ�
	Person1 operator+ (Person1& p) 
	{
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};

//2��ȫ�ֺ��� ���ؼӺ�
Person1 operator+(Person1& p1, Person1& p2)
{
	Person1 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

// �Ӻ����ص� ��������
Person1 operator+(Person1& p1, int num)
{
	Person1 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test101() 
{
	Person1 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1 p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//Person1 p3 = p2 + p1;//��δ���壬����û������Щ������ƥ��� "+" �����
	
	//ȫ�ֺ����ı��ʵ���
	//Person1 p3 = operator+(p1,p2);

	//��Ա�����ı��ʵ���
	Person1 p3 = p1.operator+(p2);
	
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	
	//��������� Ҳ���Է��� ��������
	//��ͬһ�����������������Ͳ�ͬ
	Person1 p4 = p1 + 15;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main1() 
{
	test101();

	system("pause");
	return 0;
}