#include <iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� public		���ڿ��Է��ʣ�������Է���
//����Ȩ�� protected	���ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է���
//˽��Ȩ�� privacy		���ڿ��Է��ʣ����ⲻ���Է��ʣ����಻�ܷ���

class Person3
{
public:
	//����Ȩ��
	string name;
protected:
	//����Ȩ��
	string car;
private:
	//˽��Ȩ��
	int passwd;
private:
	void func() 
	{
		name = "����";
		car = "������";
		passwd = 123456;
	}
};

int main3()
{
	//ʵ�����������
	Person3 p1;
	p1.name = "����";
	//p1.car = "����";//��Ա "Person::car" (������ ��������:16) ���ɷ���
	//p1.passwd = 123;//��Ա "Person::passwd" (������ ��������:19) ���ɷ���

	system("pause");
	return 0;
}