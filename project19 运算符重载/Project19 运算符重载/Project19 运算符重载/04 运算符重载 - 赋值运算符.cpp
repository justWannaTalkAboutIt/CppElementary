#include <iostream>
using namespace std;

//��ֵ���������
class Person4 
{
public:
	Person4(int age)
	{
		m_Age = new int(age);
	}
	~Person4() 
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//����(������void����֧����ʽ��ֵ����)
	//void operator=(Person4& p)
	//{
	//	//��������ǳ����������
	//	//�����ж��Ƿ��������ڶ�������������ͷŸɾ������
	//	if (m_Age!=NULL)
	//	{
	//		delete m_Age;
	//		m_Age = NULL;
	//	}
	//	m_Age = new int(*p.m_Age);
	//}

	//����
	Person4& operator=(Person4& p)
	{
		//��������ǳ����������
		//�����ж��Ƿ��������ڶ�������������ͷŸɾ������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		//��������
		return *this;
	}
	int* m_Age;
};

void test401() 
{
	Person4 p1(18);
	Person4 p2(20);
	Person4 p3(30);

	p2 = p1;
	p3 = p2 = p1;

	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
	cout << "p3������Ϊ��" << *p3.m_Age << endl;

}
int main4() 
{
	test401();

	int a = 10;
	int b = 20;
	int c = 30;

	c = b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;



	system("pause");
	return 0;
}