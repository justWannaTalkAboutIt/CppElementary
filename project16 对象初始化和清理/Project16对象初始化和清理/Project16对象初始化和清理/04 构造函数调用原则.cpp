#include <iostream>
using namespace std;

//���캯������ԭ��
//1������һ���࣬C++��������Ĭ�ϸ�ÿ���඼�������3������
//	Ĭ�Ϲ��죨��ʵ�֣�
//	������������ʵ�֣�
//	�������죨ֵ������

//2�����д���вι��죬�����������ṩĬ�Ϲ��죬�����ṩ��������
class Person4
{
public:
	Person4()
	{
		cout << "Person4 ��Ĭ�Ϲ��캯������" << endl;
	}
	Person4(int age)
	{
		cout << "Person4 ���вι��캯������" << endl;
		m_Age = age;
	}

	Person4(const Person4& p)
	{
		cout << "Person4 �Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person4() 
	{
		cout << "Person4 ��������������" << endl;
	}

	int m_Age;
};
//void test001() 
//{
//	Person4 p;
//	p.m_Age = 18;
//	
//	Person4 p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}

void test002()
{
	Person4 p(28);
	Person4 p2(p);
	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

int main4() 
{
	//test001();
	test002();

	system("pause");
	return 0;
}