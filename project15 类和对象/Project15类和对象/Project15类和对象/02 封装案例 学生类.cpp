#include <iostream>
using namespace std;
#include <string>

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ��������ѧ��
class Student 
{
public: //����Ȩ��
	//ѧ��
	int id;
	//����
	string name;
	//��ʾѧ��
	void showId() 
	{
		cout << this->id << endl;
	}
	//��ʾ����
	void showName() 
	{
		cout << this->name << endl;
	}
	//��ʾ������ѧ��
	void showStudent() 
	{
		cout << "������" << this->name << " ѧ�ţ�"<< this->id << endl;
	}
	//setter
	void setName(string name) 
	{
		this->name = name;
	}
	void setId(int id) 
	{
		this->id = id;
	}
};

int main02()
{
	Student s;
	s.id = 100;
	s.name = "����";
	s.showStudent();

	Student s2;
	s2.id = 101;
	s2.name = "����";
	s2.showStudent();

	Student s3;
	s3.setName("����");
	s3.setId(102);
	s3.showStudent();

	system("pause");
	return 0;
}