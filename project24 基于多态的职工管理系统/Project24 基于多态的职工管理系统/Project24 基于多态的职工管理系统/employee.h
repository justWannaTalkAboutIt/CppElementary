#pragma once 
#include <iostream>
using namespace std;
#include "Worker.h" //防止编译器不认识抽象基类，所以包含一下其头文件

class Employee : public Worker 
{
public :
	//构造函数 声明
	Employee(int id,string name,int dId);
	//显示个人信息 函数声明
	void showInfo();
	//获取岗位名称 函数声明
	string getDeptName();
};
