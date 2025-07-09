#include <iostream>
using namespace std;

//类模板与函数模板的区别、
template <class NameType, class AgeType=int>
class Person2 
{
public :
	Person2(NameType name,AgeType age)
	{
		this->name = name;
		this->age = age;
	}
	void showPerson2() 
	{
		cout << "name: " << this->name << " age: " << this->age << endl;
	}
	NameType name;
	AgeType age;
};

//1 类模板并没有自动类型推导
void test201() 
{
	//Person2 p("孙悟空",1000); //类模板中没有自动类型推导
	Person2<string, int> p("孙悟空",1000);
	p.showPerson2();
}
//2 类模板在模板参数列表中可以有默认参数
void test202() 
{
	Person2<string>p("猪八戒",999);//省略了第二个类型参数，在定义时已指定了默认类型
	p.showPerson2();
}

int main2() 
{
	test202();
	system("pause");
	return 0;
}