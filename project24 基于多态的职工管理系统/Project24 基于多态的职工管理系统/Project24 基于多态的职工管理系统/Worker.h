#pragma once
#include <iostream>
using namespace std;
#include <string>

//职工抽象类
class Worker 
{
public:

	//显示个人所有信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};
//Worker类不需要写.cpp文件，
//因为抽象，这里面的函数没有需要实现的
//需要实例化的是子类，所以子类需要重写.cpp文件
//子类的.cpp文件需要配套.h头文件（因为需要共享）
