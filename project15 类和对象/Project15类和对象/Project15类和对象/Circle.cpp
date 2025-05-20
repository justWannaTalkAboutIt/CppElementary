#include "Circle.h"
#include "Point.h"

//圆类
//设置半径
void Circle::setRadius(int r)
{
	R = r;
}
//获取半径
int Circle::getRadius()const
{
	return R;
}
//设置圆心
void Circle::setCenter(Point center)
{
	this->center = center;
}
//获取圆心
Point Circle::getCenter() const
{
	return center;
}
