#include <iostream>
using namespace std;

//访问权限
//公共权限 public		类内可以访问，类外可以访问
//保护权限 protected	类内可以访问，类外不可以访问，子类可以访问
//私有权限 privacy		类内可以访问，类外不可以访问，子类不能访问

class Person3
{
public:
	//公共权限
	string name;
protected:
	//保护权限
	string car;
private:
	//私有权限
	int passwd;
private:
	void func() 
	{
		name = "张三";
		car = "拖拉机";
		passwd = 123456;
	}
};

int main3()
{
	//实例化具体对象
	Person3 p1;
	p1.name = "李四";
	//p1.car = "奔驰";//成员 "Person::car" (已声明 所在行数:16) 不可访问
	//p1.passwd = 123;//成员 "Person::passwd" (已声明 所在行数:19) 不可访问

	system("pause");
	return 0;
}