#include <iostream>
using namespace std;

//���μ̳�

class Animal 
{
public:
	int m_Age;
};

//������̳� ��������μ̳д����ĳ�Ա�����ظ������ڴ������
//�̳�֮ǰ�ӹؼ��� virtual ����̳�
//Animal ���Ӧ��Ϊ�����
class Sheep : virtual public Animal 
{
};
class Tuo : virtual public Animal 
{
};

class SheepTuo: public Sheep, public Tuo
{
};

void test801() 
{
	SheepTuo st;
	
	//st.m_Age = 18;//���� "SheepTuo::m_Age" ����ȷ;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//���������μ̳У���������ӵ����ͬ���ݣ���Ҫ���������� ������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//�����μ̳е���һ���������������ݿ������˷��ڴ�
	//������̳� ������μ̳е�����
	//��������̳�֮�󣬿���ʹ��
	cout << "st.m_Age = " << st.m_Age << endl;
}
int main() 
{
	test801();

	system("pause");
	return 0;
}