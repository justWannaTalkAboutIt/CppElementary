#include <iostream>
using namespace std;

//�̳��еĹ��������˳��
class Base4 
{
public:
	Base4()
	{
		cout << "Base4 �Ĺ��캯����" << endl;
	}
	~Base4() 
	{
		cout << "Base4 ������������" << endl;
	}
};

class Son4 : public Base4 
{
public:
	Son4()
	{
		cout << "Son4 �Ĺ��캯����" << endl;
	}
	~Son4()
	{
		cout << "Son4 ������������" << endl;
	}
};
void test401() 
{
	//Base4 b;
	Son4 s;
	//�̳��еĹ��������˳������
	//�ȹ��츸�࣬�ڹ������࣬
	//����˳��͹���˳���෴
}

int main4() 
{
	test401();

	system("pause");
	return 0;
}