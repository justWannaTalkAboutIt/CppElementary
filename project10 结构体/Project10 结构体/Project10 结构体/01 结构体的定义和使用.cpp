#include<iostream>
using namespace std;
#include <string>
//1、创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student 
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;//2.3 在定义结构体时顺便创建一个结构体变量s3

//2、通过学生类型创建具体学生

int main1()
{
	//2.1 struct Student s1;
	struct Student s1;
	//给s1属性赋值，通过点.访问结构体的属性
	s1.name = "zhangsan";
	s1.age = 19;
	s1.score = 100;

	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;

	//2.2 struct Student s2 = {...};
	struct Student s2 = { "lisi",18,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;

	cout << "结构体定义时必须有struct关键字，结构体创建时可以省略struct关键字" << endl;
	system("pause");
	return 0;
}