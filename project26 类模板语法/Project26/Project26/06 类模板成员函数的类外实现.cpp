#include <iostream>
using namespace std;

//��ģ���Ա��������ʵ��
template <class T1,class T2>
class Person6 
{
public:
	Person6(T1 name, T2 age);
		/*{
			this->m_name = name;
			this->m_age = age;
		}*/

	void showPerson6();
	/*{
		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
	}*/
	T1 m_name;
	T2 m_age;
};

//���캯��������ʵ��
template <class T1, class T2>
Person6<T1,T2>::Person6(T1 name,T2 age) 
{
	this->m_name = name;
	this->m_age = age;
}

//��Ա����������ʵ��
template <class T1, class T2>
void Person6<T1, T2>::showPerson6() 
{
	cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
}

//���Ժ���
void test601() 
{
	Person6<string, int> p("�����", 100);
	p.showPerson6();
}

int main6() 
{
	test601();
	system("pause");
	return 0;
}