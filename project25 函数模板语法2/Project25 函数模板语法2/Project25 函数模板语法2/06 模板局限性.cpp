#include <iostream>
using namespace std;

//ģ�������
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��
//�е������������

class Person 
{
public:
	Person(string name, int age) 
	{
		this->name = name;
		this->age = age;
	}
	//����
	string name;
	//����
	int age;
};

//�Ա����������Ƿ���ȵĺ���
template <typename T>
bool myCompare(T& a,T& b)
{
	if (a == b)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//���þ��廯��Person�汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& p1, Person& p2) //template<>������ģ��ľ��廯���غ���
{
	if (p1.name == p2.name && p1.age == p2.age) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}


void test601()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a,b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else 
	{
		cout << "a != b" << endl;

	}
}


void test602()
{
	Person p1 = { "Tom",10 };
	Person p2 = { "Tom",10 };

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main() 
{
	//test601();
	test602(); //�����ơ�==��:��T����������������Ԥ����������ɽ��յ����͵�ת��
	system("pause");
	return 0;
}
//ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��