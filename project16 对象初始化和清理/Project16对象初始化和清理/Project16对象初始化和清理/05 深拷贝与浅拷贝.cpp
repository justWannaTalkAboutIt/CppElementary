#include <iostream>
using namespace std;

//�����ǳ����
class Person5
{
public:
	Person5() 
	{
		cout << "Person5��Ĭ�Ϲ��캯������" << endl;
	}
	Person5(int age,int height) 
	{
		cout << "Person5 ���вι��캯������" << endl;
		m_Age = age;
		m_height = new int(height);
	}
	//�Լ�ʵ�ֿ������캯�� ���ǳ�������µ� ָ���ظ��ͷ�����
	Person5(const Person5& p)
	{
		cout << "Person5 �������캯������" << endl;
		m_Age = p.m_Age;
		//m_height = p.m_height //������Ĭ�ϵ�ǳ����ʵ��
		//DIY �������
		m_height = new int(*p.m_height);
	}
	~Person5() 
	{
		//�������룬 �������������� �� �ͷŲ���
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Person5 ��������������" << endl;
	}
	int m_Age;
	int* m_height;
};

void test0001()
{
	Person5 p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age << " ���Ϊ��" << *p1.m_height << endl;
	Person5 p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << " ���Ϊ��" << *p2.m_height << endl;

}

int main5() 
{
	test0001();

	system("pause");
	return 0;
}