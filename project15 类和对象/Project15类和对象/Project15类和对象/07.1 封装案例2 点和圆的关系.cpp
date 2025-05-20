#include <iostream>
using namespace std;
#include "Point.h"
#include "Circle.h"
//���Բ�Ĺ�ϵ����


void isInCircle(const Point& p, const Circle& c)
{
	//��������֮�����ƽ��
	int dx = c.getCenter().getX() - p.getX();
	int dy = c.getCenter().getY() - p.getY();
	int d_s = dx * dx + dy * dy;

	//����Բ�뾶��ƽ��
	int r_s = c.getRadius() * c.getRadius();

	//�жϹ�ϵ
	if (d_s == r_s)
	{
		cout << "����Բ��" << endl;
	}
	else if (d_s < r_s)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//����Բ
	Circle c;
	c.setRadius(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(10);
	//�����ϵ
	isInCircle(p, c);

	system("pause");
	return 0;
}