#include <iostream>
using namespace std;

//thisָ���ʹ��
//1��������Ƴ�ͻ
//2�����ض�������*this
class Person2 
{
public:
	Person2(int age)
	{
		//thisָ��ָ����� �����õĳ�Ա���� �����Ķ���
		//����֮��˭�� ��ָ˭
		this->age = age;
	}

	Person2& Person2AddAge(const Person2& p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};

void test201() 
{
	Person2 p1(18);
	cout << "p1 ������Ϊ��" << p1.age << endl;
}

void test202() 
{
	Person2 p1(10);

	Person2 p2(10);

	p2.Person2AddAge(p1).Person2AddAge(p1).Person2AddAge(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}
int main2() 
{
	cout << "-------test01" << endl;
	test201();
	cout << "-------test02" << endl;
	test202();

	system("pause");
	return 0;
}