#include <iostream>
using namespace std;

class Base3 
{
public: 
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son33 :public Base3 
{
public:
	int m_D;
};

//���� developer command prompt ���߲鿴����ģ��
//��ת�̷�
//��ת�ļ�·�� cd ����·����
// cl /d1 reportSingleClassLayout���� �����ļ���
void test301() 
{
	//��ӡ�����16
	cout << "size of Son33 = " << sizeof(Son33) << endl;
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������ˣ������Ȼ�̳��˵����ʲ���
}
int main3() 
{
	test301();

	system("pause");
	return 0;
}