#include<iostream>
using namespace std;
#include<string>

struct Student 
{
	string name;
	int age;
	int score;
};

int main3()
{
	//1������ѧ���ṹ�����
	struct Student s = {"zhangsan",18,100};
	//2��ͨ��ָ��ָ��ṹ�����
	Student* p = &s;
	//3��ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name
		<< "���䣺" << p->age
		<< "����" << p->score << endl;

	system("pause");
	return 0;
}