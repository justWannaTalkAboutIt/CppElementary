#include <iostream>
using namespace std;

//��̳��﷨
class Base71
{
public:
	Base71() 
	{
		m_A = 100;
	}
	int m_A;
};
class Base72 
{
public:
	Base72() 
	{
		m_A = 200;
		m_B = 200;
	}
	int m_A;
	int m_B;
};
//���� ��Ҫ�̳�Base1 �� Base2
//�﷨�� class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2 ��������
class Son7 : public Base71, public Base72 
{
public:
	int m_C = 300;
	int m_D = 400;
};
void test701() 
{
	Son7 s;
	cout << "size of Son7 s = " << sizeof(s) << endl;
	//����������ͬ�����м̳�������ͬ������ʱ����ʹ�û����������
	//cout << "m_A = " << s.m_A << endl;//"Son7::m_A" ����ȷ
	// ��Ҫ�����������ʹ��
	cout << "Base71::m_A = " << s.Base71::m_A << endl;
	cout << "Base72::m_A = " << s.Base72::m_A << endl;
}
int main7() 
{
	test701();
	system("pause");
	return 0;
}