#include <iostream>
using namespace std;

struct student 
{
	string name;
	int age;
	int score;
};
//ֵ����
void printStudent1(student s)
{
	s.age = 100;
	cout << "printStudent1�����д�ӡ ����:" << s.name << "���䣺" << s.age << "������" << s.score << endl;

}
//��ַ����
void printStudent2(student * p)
{
	p->age = 120;
	cout << "printStudent2 �����д�ӡ ����:" << p->name << "���䣺" << p->age << "������" << p->score << endl;

}

int main5()
{
	//�ṹ������������
	//��ѧ�����뵽һ����������������ӡѧ����������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	
	//�ṹ��ֵ����
	printStudent1(s);
	cout << endl;

	cout << "main �����д�ӡ ����:" << s.name << "���䣺" << s.age << "������" << s.score << endl;
	cout << endl;

	//�ṹ���ַ����
	student* p = &s;
	printStudent2(p);
	cout << endl;

	cout << "main �����д�ӡ ����:" << s.name << "���䣺" << s.age << "������" << s.score << endl;
	
	system("pause");
	return 0;
}