#include <iostream>
using namespace std;

//�̳з�ʽ
class Base1 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1 
{
public:
	void func() 
	{
		m_A = 10; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10; // �����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};
//�����̳�
class Base2 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 
{
public:
	void func() 
	{
		m_A = 100;//�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 100;//�����б�����Ա���������б�Ϊ����Ȩ��
		//m_C = 100;//������ʲ���
	}
};
//˽�м̳�
class Base3 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3 
{
public:
	void func() 
	{
		m_A = 100;//�����й�����Ա����������˽�г�Ա
		m_B = 100;//�����б�����Ա���������ɱ�����Ա
		//m_C = 100;//����˽�г�Ա��������ʲ���	
	}
};
class Grandson3 :public Son3 
{
public:
	void func()
	{
		//m_A = 100;//����son3�У�m_A�ȶ��Ѿ��ս�Ϊ˽�У���ʹ������public��ʽ�̳У�Ҳ�޷�����
	}
};

//���Ժ���
void test201()
{
	Son1 son1;
	son1.m_A = 100;
	//son1.m_B = 100;//��son1�У�m_B�Ǳ���Ȩ�ޣ�������ʲ���
}
void test202() 
{
	Son2 son2;
	//son2.m_A = 100; //��son2�У�m_A���ս��ɱ���Ȩ�ޣ�������ʲ���
	//son2.m_B = 100;//m_B ʼ���Ǳ���Ȩ�ޣ������Է���
}
void test203() 
{
	Son3 son3;
	//son3.m_A = 1000; // ��son3�У�m_A���ս��� ˽��Ȩ�ޣ�������ʲ���
	//son3.m_B = 1000; // ��son3�У�m_B���ս��� ˽��Ȩ�ޣ�������ʲ���
}
int main2() 
{
	test201();
	test202();
	test203();

	system("pause");
	return 0;
}