#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Boss : public Worker 
{
public:
	//构造函数声明
	Boss(int id, string name, int dId);

	//显示个人所有信息
	void showInfo();

	//获取岗位名称
	string getDeptName();
};

