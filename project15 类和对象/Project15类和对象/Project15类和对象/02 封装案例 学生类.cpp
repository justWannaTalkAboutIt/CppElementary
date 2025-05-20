#include <iostream>
using namespace std;
#include <string>

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生姓名和学号
class Student 
{
public: //公共权限
	//学号
	int id;
	//姓名
	string name;
	//显示学号
	void showId() 
	{
		cout << this->id << endl;
	}
	//显示姓名
	void showName() 
	{
		cout << this->name << endl;
	}
	//显示姓名和学号
	void showStudent() 
	{
		cout << "姓名：" << this->name << " 学号："<< this->id << endl;
	}
	//setter
	void setName(string name) 
	{
		this->name = name;
	}
	void setId(int id) 
	{
		this->id = id;
	}
};

int main02()
{
	Student s;
	s.id = 100;
	s.name = "张三";
	s.showStudent();

	Student s2;
	s2.id = 101;
	s2.name = "李四";
	s2.showStudent();

	Student s3;
	s3.setName("老王");
	s3.setId(102);
	s3.showStudent();

	system("pause");
	return 0;
}