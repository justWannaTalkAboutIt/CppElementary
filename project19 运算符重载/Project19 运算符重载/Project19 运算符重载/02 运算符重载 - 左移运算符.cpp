#include <iostream>
using namespace std;

//�������������
class Person2 
{
	friend ostream& operator<<(ostream& cout,Person2& p);
public:
	Person2(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:

	//1�����ó�Ա�������� ��������� p.operator<<(cout) ���� p<<cout	
	//		������Ǻ�ϲ���ּ�
	int m_A;
	int m_B;
};

//�Ƚ�ϲ���ּ�������������� ȫ�ֺ��� �������������
//void operator<<(ostream & cout, Person2& p) 
//{
//	cout << "p.m_A: " << p.m_A << " " << p.m_B << endl;
//}

//���ϰ汾��Ȼ����ʹcout<<p��Ч�Ϸ��� ��ȴ����ʹ��cout<<p<<endl
//ԭ���Ƿ���ֵ���ϸ���Ҫ����һ����cout��ͬ��ostream��
//�Ľ�����
ostream& operator<<(ostream& cout,Person2& p)
{
	cout << "p.m_A :" << p.m_A << " p.m_B : " << p.m_B << endl;
	return cout;
}

void test201() 
{
	Person2 p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	//cout << p.m_A << endl;
	//cout << p;//��û�����أ��򱨴�û������Щ������ƥ��� "<<" �����
	cout << p; // �Ϸ�
	cout << p << endl;// �޸��˷���ֵ��Ҳ�Ϸ���������ʽ��̶Է���ֵ��Ҫ��
}
int main2() 
{
	test201();

	system("pause");
	return 0;
}