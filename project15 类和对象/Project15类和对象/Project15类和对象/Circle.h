#pragma once
#include <iostream>
using namespace std;
#include "Point.h"

//圆类
class Circle
{
public:
	//设置半径
	void setRadius(int r);
		//获取半径
	int getRadius()const;
	//设置圆心
	void setCenter(Point center);
	//获取圆心
	Point getCenter() const;
private:
	int R = 1;//半径
	Point center;//圆心
}; 