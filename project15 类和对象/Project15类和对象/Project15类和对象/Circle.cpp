#include "Circle.h"
#include "Point.h"

//Բ��
//���ð뾶
void Circle::setRadius(int r)
{
	R = r;
}
//��ȡ�뾶
int Circle::getRadius()const
{
	return R;
}
//����Բ��
void Circle::setCenter(Point center)
{
	this->center = center;
}
//��ȡԲ��
Point Circle::getCenter() const
{
	return center;
}
