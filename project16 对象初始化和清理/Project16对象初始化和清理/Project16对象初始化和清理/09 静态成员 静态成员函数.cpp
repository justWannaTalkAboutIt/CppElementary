#include <iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ����
//��̬��Ա���� ֻ�ܷ��� ��̬��Ա����

class Person 
{
public:
	//��̬��Ա����
	static void func() 
	{
		m_A = 100; // ��̬��Ա���� ���Է��� ��̬��Ա����
		cout << "static void func ����" << endl;
		//m_B = 200; // ��̬��Ա���������Է��� �Ǿ�̬��Ա�������޷����ֵ������ĸ������m_B
	}

	static int m_A;
	int m_B;

	//��̬��Ա�������з���Ȩ�޵�
private:
	static void func2() 
	{
		cout << "static void func2 �ĵ���" << endl;
	}
};

int Person::m_A = 0;

void test901() 
{
	//1��ͨ��������з���
	Person p;
	p.func();

	//2��ͨ���������з���
	Person::func();

	//static���� ����Ȩ��
	//Person::func2(); //���� "Person::func2" (������ ��������:24) ���ɷ���
	//������ʲ���˽�к���
}

int main() 
{
	test901();

	system("pause");
	return 0;
}