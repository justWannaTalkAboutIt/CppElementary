#include <iostream>
using namespace std;
#include <string> 

//��ģ���������������
//1 ָ����������
//2 ����ģ�廯
//3 ������ģ�廯

template <class T1,class T2>
class Person4
{
public:
	Person4(T1 name, T2 age) 
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson4() 
	{
		cout << "������" << this->m_name << "���䣺" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1 ָ����������
void printPerson4(Person4<string,int>&p) //��ģ���������������
{
	p.showPerson4();
}

void test401() 
{
	Person4<string, int>p("�����",100);
	printPerson4(p);
}

//2 ����ģ�廯
template <class T1,class T2>
void printPerson42(Person4<T1,T2>&p) 
{
	p.showPerson4();
	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;

}

void test402() 
{
	Person4<string, int>p("��˽�", 100);
	printPerson42(p);
}

//3 ������ģ�廯(�������ư�)
template<class T> //����ɶ��ɶ��
void printPerson43(T& p) 
{
	p.showPerson4();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}

void test403() 
{
	Person4<string, int>p("��ɮ",30);
	printPerson43(p);
}

int main4() 
{
	//test401();
	//test402();
	test403(); 
	system("pause");
	return 0;
}