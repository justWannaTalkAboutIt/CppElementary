#include <iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ
class Base6 
{
public:
	static int m_A;
	static void func() 
	{
		cout << "Base6 - static void func() " << endl;
	}
	static void func(int a)
	{
		cout << "Base6 - static void func() " << endl;
	}
};

int Base6::m_A = 100;

class Son6 :public Base6 
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son6 - static void func() " << endl;
	}
};
int Son6::m_A = 200;

//ͬ����̬��Ա����
void test601() 
{
	//1��ͨ�����������ʾ�̬����
	Son6 s;
	//ֱ�ӷ��� ���ʵ�������ľ�̬����
	cout << "s.m_A = " << s.m_A << endl;
	//����������� ���ʵĸ���ľ�̬����
	cout << "s.Base6::m_A = " << s.Base6::m_A << endl;
	
	//2��ֱ��ͨ������������ͬ����̬����
	cout << Son6::m_A << endl;
	//ͨ��������ʽ���ʸ����������µľ�̬����
	cout << Son6::Base6::m_A << endl;
}

void test602() 
{
	//1��ͨ���������
	Son6 s;
	s.func();
	s.Base6::func();
	//2��ͨ��������ʽ����ͬ�� ��̬��Ա����
	Son6::func();
	Son6::Base6::func();
	Son6::Base6::func(10);
	//���������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ظ���������ͬ����̬��Ա����
	//�����Ҫ���ʸ����б����ص�ͬ����̬��Ա��������Ҫ��������
}
int main6() 
{
	//test601();
	test602();

	system("pause");
	return 0;
}