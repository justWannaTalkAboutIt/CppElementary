#pragma once
#include <iostream>
using namespace std;
#include "Point.h"

//Բ��
class Circle
{
public:
	//���ð뾶
	void setRadius(int r);
		//��ȡ�뾶
	int getRadius()const;
	//����Բ��
	void setCenter(Point center);
	//��ȡԲ��
	Point getCenter() const;
private:
	int R = 1;//�뾶
	Point center;//Բ��
}; 