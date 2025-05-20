#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//获取X
	int getX() const;

	//设置X
	void setX(int X);
	
	//获取Y
	int getY() const;
	
	//设置Y
	void setY(int Y);
private:
	int X; //点的X坐标
	int Y; //点的Y坐标
};
