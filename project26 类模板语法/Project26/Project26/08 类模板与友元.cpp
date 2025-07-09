#include <iostream>
using namespace std;
#include <string>

//��ģ�������Ԫ���������ں�����ʵ��
//ͨ��ȫ�ֺ�����ӡPerson��Ϣ
	//1 ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ��������
	//2 ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//����Ҫ�ñ�����֪���������
template<class T1, class T2>
class Person8; 

//ȫ����Ԫ��������ʵ����Ҫд����ʵ��ǰ��
template<class T1, class T2>
void printPerson82 (Person8<T1, T2>& p)
{
	cout << p.m_name << " Age: " << p.m_age << endl;
}

template <class T1,class T2>
class Person8 
{
	//ȫ�ֺ��� ����ʵ�� �ǵü�friend
	friend void printPerson81(Person8<T1,T2>& p) 
	{
		cout << "Name: " << p.m_name << " Age: " << p.m_age << endl;
	}
	//ȫ�ֺ�����������������ʵ��
	//��һ����ģ������б��Ժ����⺯��ģ��ʵ�ֱ���һ��
	friend void printPerson82<>(Person8<T1,T2>& p); //����˺���ģ�壬��Ҫ��ǰ�ñ�����֪����������Ҫ�ú���ʵ��д����ʵ��ǰ

public:

	Person8(T1 name,T2 age) //���캯������Ҫд��public�£�����û����ʼ������
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//1 ȫ�ֺ���������ʵ��
void test801() 
{
	Person8<string, int> p("Tom", 20);
	printPerson81(p);
}

//2 ȫ�ֺ�������������������ʵ��
void test802() 
{
	Person8<string, int> p("Jerry",18);
	printPerson82(p);
}


int main8()
{
	test801();
	test802();
	system("pause");
	return 0;
}
