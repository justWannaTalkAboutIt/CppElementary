#include <iostream>
using namespace std;
//�������캯������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2��ֵ���ݵķ�ʽ������������ֵ

//3��ֵ��ʽ���ؾֲ�����

class Person3
{
public:
	Person3()
	{
		cout << "Person3Ĭ�Ϲ��캯������" << endl;
	}

	Person3(int age)
	{
		cout << "Person3�вι��캯������" << endl;
		m_Age = age;
	}

	Person3(const Person3& p)
	{
		cout << "Person3�������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person3()
	{
		cout << "Person3������������" << endl;
	}
	int m_Age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1() 
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}
//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person3 p)
{
}
void test2() 
{
	Person3 p;
	doWork(p);
}

//3��ֵ��ʽ���ؾֲ�����
Person3 doWork3()
{
	Person3 p1;
	Person3 p2;
	cout << (int*)&p1 << endl;
	cout << (int*)&p2 << endl;

	return rand()>0.5?p1:p2;
}
void test3() 
{
	Person3 p = doWork3();
	cout << (int*)&p << endl;
}

int main3() 
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}