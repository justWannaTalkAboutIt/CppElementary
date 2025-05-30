#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Worker.h"

//经理类
class Manager:public Worker 
{
public:
	//构造函数
	Manager(int id,string name, int dId);

	//显示个人所有信息
	void showInfo() ;

	//获取岗位名称
	string getDeptName();
};

