#include <iostream>
using namespace std;

struct student 
{
	string name;
	int age;
	int score;
};
//值传递
void printStudent1(student s)
{
	s.age = 100;
	cout << "printStudent1函数中打印 姓名:" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;

}
//地址传递
void printStudent2(student * p)
{
	p->age = 120;
	cout << "printStudent2 函数中打印 姓名:" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;

}

int main5()
{
	//结构体作函数参数
	//将学生传入到一个函数作参数，打印学生的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	
	//结构体值传递
	printStudent1(s);
	cout << endl;

	cout << "main 函数中打印 姓名:" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
	cout << endl;

	//结构体地址传递
	student* p = &s;
	printStudent2(p);
	cout << endl;

	cout << "main 函数中打印 姓名:" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
	
	system("pause");
	return 0;
}