#include <iostream>
using namespace std;

//�̳���ͬ�������Ĵ���
class Base5 
{
public:
	Base5() 
	{
		m_A = 100;
	}
	void func() 
	{
		cout << "Base5 - func() ���� " << endl;
	}
	void func(int a)
	{
		cout << "Base5 - func(int a) ���� " << endl;
	}
	int m_A;
};
class Son5:public Base5 
{
public:
	Son5() 
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son5 - func() ���� " << endl;
	}
	int m_A;
};
void test501() 
{
	Son5 s;
	//���ͬ����ֱ�ӷ��� ���ʵ������������ͬ������
	cout << "s.m_A = " << s.m_A << endl;
	//�������ʸ���ͬ��������Ҫ��һ������������
	cout << "s.Base5:m_A = " << s.Base5::m_A << endl;
}
void test502()
{
	Son5 s;
	//ֱ�ӵ��ã����õ��������е�ͬ������
	s.func();
	//�������򣬵��ø�����ͬ������
	s.Base5::func();
	//��д��ͬ�����غ���ʱ������ֱ��ʹ�����з�ʽ
	//s.func(10);//���������еĲ���̫��,�޷��Զ�ת���� ���� ������
	//������ุ���������������������ͬ����Ա�����ص���������ͬ����Ա����
}

int main5() 
{
	test501();
	test502();

	system("pause");
	return 0;
}