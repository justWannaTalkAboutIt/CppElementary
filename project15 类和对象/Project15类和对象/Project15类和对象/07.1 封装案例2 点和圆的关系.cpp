#include <iostream>
using namespace std;
#include "Point.h"
#include "Circle.h"
//点和圆的关系案例


void isInCircle(const Point& p, const Circle& c)
{
	//计算两点之间距离平方
	int dx = c.getCenter().getX() - p.getX();
	int dy = c.getCenter().getY() - p.getY();
	int d_s = dx * dx + dy * dy;

	//计算圆半径的平方
	int r_s = c.getRadius() * c.getRadius();

	//判断关系
	if (d_s == r_s)
	{
		cout << "点在圆上" << endl;
	}
	else if (d_s < r_s)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	//创建圆
	Circle c;
	c.setRadius(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(10);
	//输出关系
	isInCircle(p, c);

	system("pause");
	return 0;
}