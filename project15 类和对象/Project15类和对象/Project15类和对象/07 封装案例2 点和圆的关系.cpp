#include <iostream>
using namespace std;

//���Բ�Ĺ�ϵ����

//class Point 
//{
//public:
//	//��ȡX
//	int getX() const
//	{
//		return X;
//	}
//	//����X
//	void setX(int X) 
//	{
//		this->X = X;
//	}
//	//��ȡY
//	int getY() const
//	{
//		return Y;
//	}
//	//����Y
//	void setY(int Y)
//	{
//		this->Y = Y;
//	}
//
//private:
//	int X; //���X����
//	int Y; //���Y����
//};
////Բ��
//class Circle 
//{
//public:
//	//���ð뾶
//	void setRadius(int r) 
//	{
//		R = r;
//	}
//	//��ȡ�뾶
//	int getRadius()const 
//	{
//		return R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		this->center = center;
//	}
//	//��ȡԲ��
//	Point getCenter() const 
//	{
//		return center;
//	}
//private:
//	int R=1;//�뾶
//	Point center;//Բ��
//};
//�жϵ��Բ�Ĺ�ϵ
//void isInCircle7(const Point& p, const Circle& c) 
//{
//	//��������֮�����ƽ��
//	int dx = c.getCenter().getX() - p.getX();
//	int dy = c.getCenter().getY() - p.getY();
//	int d_s = dx * dx + dy * dy;
//
//	//����Բ�뾶��ƽ��
//	int r_s = c.getRadius() * c.getRadius();
//
//	//�жϹ�ϵ
//	if (d_s == r_s) 
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (d_s < r_s)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else 
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main() 
//{
//	//����Բ
//	Circle c;
//	c.setRadius(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(11);
//	//�����ϵ
//	//isInCircle(p,c);
//
//	system("pause");
//	return 0;
//}