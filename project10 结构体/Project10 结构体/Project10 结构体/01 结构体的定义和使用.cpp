#include<iostream>
using namespace std;
#include <string>
//1������ѧ���������ͣ�ѧ�����������������䣬������
struct Student 
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//2.3 �ڶ���ṹ��ʱ˳�㴴��һ���ṹ�����s3

//2��ͨ��ѧ�����ʹ�������ѧ��

int main1()
{
	//2.1 struct Student s1;
	struct Student s1;
	//��s1���Ը�ֵ��ͨ����.���ʽṹ�������
	s1.name = "zhangsan";
	s1.age = 19;
	s1.score = 100;

	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;

	//2.2 struct Student s2 = {...};
	struct Student s2 = { "lisi",18,80 };
	cout << "������" << s2.name << "���䣺" << s2.age << "������" << s2.score << endl;

	cout << "�ṹ�嶨��ʱ������struct�ؼ��֣��ṹ�崴��ʱ����ʡ��struct�ؼ���" << endl;
	system("pause");
	return 0;
}