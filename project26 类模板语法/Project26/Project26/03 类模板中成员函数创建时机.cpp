#include <iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա��������ʱ��ȥ����

class Person31 
{
public:
	void showPerson31() 
	{
		cout << "Person31 show" << endl;
	}
};

class Person32
{
public:
	void showPerson32()
	{
		cout << "Person32 show" << endl;
	}
};

template <class T>
class MyClass 
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showPerson31();
	}
	void func2() 
	{
		obj.showPerson32();
	}
};
//��ģ���еĳ�Ա�����Ĵ���ʱ��
//��ģ���еĳ�Ա����һ��ʼ����������������Ϊobjȷ����������
//ֱ����ȥ�����á���ʱ����ģ���еĳ�Ա������ȷ��T����
//����֪����Ա�����ܲ��ܵ�����

void test301() 
{
	MyClass<Person31>m;
	m.func1();
	//m.func2();//"showPerson32": ���� "Person31" �ĳ�Ա
}

int main3() 
{
	test301();
	system("pause");
	return 0;
}