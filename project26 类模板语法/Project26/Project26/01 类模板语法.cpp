#include <iostream>
using namespace std;
#include <string>
//类模板
template <class NameType, class AgeType>
class Person1 
{
public:
	Person1(NameType name,AgeType age) 
	{
		this->name = name;
		this->age = age;
	}
	
	void showPerson1() 
	{
		cout << "Name:" << this->name << " Age: " << this->age << endl;
	}
	NameType name;
	AgeType age;
};

void test101() 
{
	Person1<string, int>p1("孙悟空", 999);// 将类型参数化
	p1.showPerson1();
}

int main1() 
{
	test101();
	system("pause");
	return 0;
}