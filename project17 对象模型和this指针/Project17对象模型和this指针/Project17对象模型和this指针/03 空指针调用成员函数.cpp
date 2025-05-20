#include <iostream>
using namespace std;

//空指针调用成员函数
class Person3 
{
public:
	void showClassName() 
	{
		cout << "this is Person3 class" << endl;
	}
	void showPerson3Age() 
	{
		//空指针检测，防止传入空指针捣乱
		if (this == NULL) 
		{
			return;
		}
		cout << "age = " << m_Age << endl;
		//报错，传入的指针是为NULL
	}

	int m_Age;
};
void test301()
{
	Person3* p = NULL;
	p->showClassName();//通过，合法
	p->showPerson3Age();//报错，不合法
}

int main3() 
{
	test301();

	system("pause");
	return 0;
}