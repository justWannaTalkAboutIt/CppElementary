#include <iostream>
using namespace std;

const double PI = 3.14;
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*PI*�뾶

class Circle 
{
	//����Ȩ��
public:
	//Բ������
	int m_r; //�뾶
	//Բ����Ϊ
	double calcCirc()
	{
		return 2 * PI * m_r;
	}
};
int main2() 
{
	//ͨ��Բ�� ���������Բ������
	Circle cl;
	//��Բ���� �����Խ��и�ֵ
	cl.m_r = 10;
	//2*PI*10=62.8
	cout << "Բ���ܳ�Ϊ��" << cl.calcCirc() << endl;

	system("pause");
	return 0;
}