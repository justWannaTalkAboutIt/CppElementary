#include<iostream>
using namespace std;
#include<string>
#include<vector>

//ʹ��vertor�洢�Զ�����������

class Person2 
{
public:
	//���캯�����޲�
	Person2() {}
	//���캯�����в�
	Person2(string name,int age)
	{
		this->m_Name = name;
		this->m_age = age;
	}
	string m_Name;
	int m_age;
};

//test
void test201() 
{
	//��׼��������
	vector<Person2>v; //Ĭ������²�Ҫָ����С,Ӧ������vector�����ݻ���
	
	//�ٴ���Person2����
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);

	//�Ѷ���װ��������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//��������
	//��ô�������ˣ�*it��ɶ��
	for (vector<Person2>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������"<< (*it).m_Name << "���䣺"<<(*it).m_age << endl;
	}
}

//����Զ������͵�ָ��
void test202()
{
	//����׼��������
	vector<Person2*> v;
	//��δ�������
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);

	//������Щ��һ����Ҫ�Ѵ��������ָ��װ��������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//����
	for (vector<Person2*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "::������" << (*it)->m_Name << "���䣺" << (*it)->m_age << endl;
	}
}

int main2() 
{
	//test201();
	test202();
	system("pause");
	return 0;
}