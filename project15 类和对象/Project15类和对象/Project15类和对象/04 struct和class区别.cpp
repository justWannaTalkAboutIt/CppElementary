#include <iostream>
using namespace std;

class C1
{
	int m_A; //Ĭ��Ȩ�� ˽��
};

struct C2 
{
	int m_A; //Ĭ��Ȩ�� ����
};
int main4()
{
	//struct��class����
	//struct Ĭ��Ȩ���ǹ��� public
	//class  Ĭ��Ȩ����˽�� private
	C1 c1;
	C2 c2;

	//c1.m_A;//��Ա "C1::m_A" (������ ��������:6) ���ɷ���
	c2.m_A = 100;
	system("pause");
	return 0;
}