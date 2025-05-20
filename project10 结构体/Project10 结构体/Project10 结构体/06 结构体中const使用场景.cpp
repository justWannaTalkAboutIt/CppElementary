#include<iostream>
using namespace std;
#include <string>

struct student 
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

void printStudent3(student s)
{
	cout << "姓名：" << s.name << " "
		<< "年龄：" << s.age << " "
		<< "得分：" << s.score << endl; 
}

void printStudent4(student* s)
{
	s->age = 100;
	cout << "姓名：" << s->name << " "
		<< "年龄：" << s->age << " "
		<< "得分：" << s->score << endl;
}

void printStudent5(const student* s)
{
	//s->age = 100; // 表达式必须是可修改的左值
	cout << "姓名：" << s->name << " "
		<< "年龄：" << s->age << " "
		<< "得分：" << s->score << endl;
}
int main6()
{
	//创建结构体变量
	student s = {"张三",15,70};

	//通过函数打印结构体信息
	printStudent3(s);

	printStudent4(&s);
	//解释背景
	cout << endl;
	cout << "值传递将实参的值拷贝一份给形参，在函数内运行，结束后释放" << endl;
	cout << "当实参数据体量过大时，拷贝的形参占用内存，影响效率" << endl;
	cout << "所以地址传递减少了内存空间，不会复制新的副本出来" << endl;
	cout << "但地址传递会可能出现错误的更改，为防止这种错误的更改，应该使用const" << endl;
	cout << endl;

	printStudent5(&s); 

	system("pause");
	return 0;
}