#include <iostream>
using namespace std;

//��̬��Ա����
class Person8 
{
public:
	//1�����ж�����ͬһ������
	//2������׶ξͷ����ڴ�
	//3������������ �����ʼ������
	static int m_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
};

int Person8::m_A = 100;
int Person8::m_B = 200;


void test801()
{
	Person8 p;
	cout << p.m_A << endl;

	Person8 p2;
	p2.m_A = 200;

	//100?200?
	cout << p2.m_A << endl;
	//cout << Person8::m_B << endl;//��Ա "Person8::m_B" (������ ��������:19) ���ɷ���

}
void test802() 
{
	//��̬��Ա����������ĳ���������ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1��ͨ��������з���
	Person8 p;
	cout << p.m_A << endl;
	//2��ͨ������ֱ�ӷ���
	cout << Person8::m_A << endl;
}
int main8() 
{
	//test801();
	test802();

	system("pause");
	return 0;
}