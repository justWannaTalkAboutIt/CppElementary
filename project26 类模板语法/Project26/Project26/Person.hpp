#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
class Person7
{
public:
	Person7(T1 name, T2 age);

	void showPerson7();

	T1 m_name;
	T2 m_age;
};

template <class T1, class T2>
Person7<T1, T2>::Person7(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template <class T1, class T2>
void Person7<T1, T2>::showPerson7()
{
	cout << "Name: " << this->m_name << " Age: " << this->m_age << endl;
}