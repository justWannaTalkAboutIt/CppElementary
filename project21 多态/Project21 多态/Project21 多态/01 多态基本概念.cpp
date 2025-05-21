#include <iostream>
using namespace std;

//多态

class Animal1 
{
public:
	virtual void speak() 
	{
		cout << " 动物在说话" << endl;
	}
};

class Cat1 : public Animal1 
{
public:
	virtual void speak() 
	{
		cout << "^-^小猫在说话" << endl;
	}
};

class Dog:public Animal1 
{
public:
	virtual void speak() 
	{
		cout << " =-=小狗在说话" << endl;
	}
};
//执行说话的函数
//如果想执行让猫说话，那么这个函数地址就不能提前在编译阶段绑定，需要在运行阶段进行绑定，也就是地址晚绑定
//简言之，需要在基类中的方法前面加virtual使之变成虚函数
void doSpeak(Animal1& Animal1) // Animal1& Animal1 = Cat1 Cat1 父类指针可以直接指向子类对象
{
	//地址早绑定， 在编译阶段确定函数地址
	Animal1.speak();

}
//动态多态的满足条件：
// 1、有继承关系
// 2、子类重写父类虚函数
// ps:子类重写父类虚函数时virtual关键字可以写也可以不写
// 
//动态多态的使用：
// 父类引用(指针) 指向子类引用
//测试函数
void test101() 
{
	Cat1 Cat1;
	doSpeak(Cat1); //Animal1& Animal1 = Cat1 Cat1,父类引用接受一个子类对象

	Dog dog;
	doSpeak(dog);

}
void test102() 
{
	cout << "size of Animal1 = " << sizeof(Animal1) << endl;
}
int main1() 
{
	test101();//输出“动物在说话”

	test102();//大小为4，一个指针的大小

	system("pause");
	return 0;
}