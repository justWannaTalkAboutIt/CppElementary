#include <iostream>
using namespace std;

//点和圆的关系案例

//class Point 
//{
//public:
//	//获取X
//	int getX() const
//	{
//		return X;
//	}
//	//设置X
//	void setX(int X) 
//	{
//		this->X = X;
//	}
//	//获取Y
//	int getY() const
//	{
//		return Y;
//	}
//	//设置Y
//	void setY(int Y)
//	{
//		this->Y = Y;
//	}
//
//private:
//	int X; //点的X坐标
//	int Y; //点的Y坐标
//};
////圆类
//class Circle 
//{
//public:
//	//设置半径
//	void setRadius(int r) 
//	{
//		R = r;
//	}
//	//获取半径
//	int getRadius()const 
//	{
//		return R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		this->center = center;
//	}
//	//获取圆心
//	Point getCenter() const 
//	{
//		return center;
//	}
//private:
//	int R=1;//半径
//	Point center;//圆心
//};
//判断点和圆的关系
//void isInCircle7(const Point& p, const Circle& c) 
//{
//	//计算两点之间距离平方
//	int dx = c.getCenter().getX() - p.getX();
//	int dy = c.getCenter().getY() - p.getY();
//	int d_s = dx * dx + dy * dy;
//
//	//计算圆半径的平方
//	int r_s = c.getRadius() * c.getRadius();
//
//	//判断关系
//	if (d_s == r_s) 
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (d_s < r_s)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else 
//	{
//		cout << "点在圆外" << endl;
//	}
//}
//int main() 
//{
//	//创建圆
//	Circle c;
//	c.setRadius(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(11);
//	//输出关系
//	//isInCircle(p,c);
//
//	system("pause");
//	return 0;
//}