#include<iostream>
using namespace std;
#include <string>

struct student 
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

void printStudent3(student s)
{
	cout << "������" << s.name << " "
		<< "���䣺" << s.age << " "
		<< "�÷֣�" << s.score << endl; 
}

void printStudent4(student* s)
{
	s->age = 100;
	cout << "������" << s->name << " "
		<< "���䣺" << s->age << " "
		<< "�÷֣�" << s->score << endl;
}

void printStudent5(const student* s)
{
	//s->age = 100; // ���ʽ�����ǿ��޸ĵ���ֵ
	cout << "������" << s->name << " "
		<< "���䣺" << s->age << " "
		<< "�÷֣�" << s->score << endl;
}
int main6()
{
	//�����ṹ�����
	student s = {"����",15,70};

	//ͨ��������ӡ�ṹ����Ϣ
	printStudent3(s);

	printStudent4(&s);
	//���ͱ���
	cout << endl;
	cout << "ֵ���ݽ�ʵ�ε�ֵ����һ�ݸ��βΣ��ں��������У��������ͷ�" << endl;
	cout << "��ʵ��������������ʱ���������β�ռ���ڴ棬Ӱ��Ч��" << endl;
	cout << "���Ե�ַ���ݼ������ڴ�ռ䣬���Ḵ���µĸ�������" << endl;
	cout << "����ַ���ݻ���ܳ��ִ���ĸ��ģ�Ϊ��ֹ���ִ���ĸ��ģ�Ӧ��ʹ��const" << endl;
	cout << endl;

	printStudent5(&s); 

	system("pause");
	return 0;
}