#include <iostream>
using namespace std;

//��ָ����ó�Ա����
class Person3 
{
public:
	void showClassName() 
	{
		cout << "this is Person3 class" << endl;
	}
	void showPerson3Age() 
	{
		//��ָ���⣬��ֹ�����ָ�뵷��
		if (this == NULL) 
		{
			return;
		}
		cout << "age = " << m_Age << endl;
		//���������ָ����ΪNULL
	}

	int m_Age;
};
void test301()
{
	Person3* p = NULL;
	p->showClassName();//ͨ�����Ϸ�
	p->showPerson3Age();//�������Ϸ�
}

int main3() 
{
	test301();

	system("pause");
	return 0;
}