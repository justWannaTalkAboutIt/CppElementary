#include <iostream>
using namespace std;
#include <string>
//#include "Person.cpp" //��һ�ֽ����ʽ��ֱ�Ӱ���.cppԴ�ļ�
#include "Person.hpp" 
//�ڶ��ֽ����ʽ����.h�ļ����ݺ�.cpp�ļ�����д��һ��
//��������Ϊ.hpp�ļ�

//��ģ���ļ���д����
//template <class T1, class T2>
//class Person7
//{
//public:
//	Person7(T1 name, T2 age);
//
//	void showPerson7();
//
//	T1 m_name;
//	T2 m_age;
//};

//template <class T1,class T2>
//Person7<T1,T2>::Person7(T1 name,T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template <class T1, class T2>
//void Person7<T1,T2>::showPerson7() 
//{
//	cout << "Name: " << this->m_name << " Age: " << this->m_age << endl;
//}

//test ����
void test701() 
{
	Person7<string, int> p("��˽�", 299);
	p.showPerson7();
}
int main7() 
{
	test701();
	system("pause");
	return 0;
}