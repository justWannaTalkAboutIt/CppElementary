#include <iostream>
using namespace std;

//���麯�� �� ������

class Base 
{
public:
	//���麯��
	//ֻҪ��һ�����麯��������� ��Ϊ������
	//�������ص㣺1���޷�ʵ�������� 2�����������д�麯��������Ҳ�����麯��
	virtual void func() = 0;
};

class Son : public Base 
{
public:
	void func() 
	{
		cout << "func �ڵ���" << endl;
	}
};

void test301() 
{
	//�������޷�ʵ��������
	//Base b;//������ʹ�ó��������� "Base" �Ķ���:
	//new Base;//������ʹ�ó��������� "Base" �Ķ���:
	//Son s;
	//new Son(); //���������д���෽��������ʵ��������
	Base* b = new Son();//Ϊ�ﵽ��̬��Ч��������ָ�� ָ���������
	b->func();
}
int main3() 
{
	test301();
	system("pause");
	return 0;
}