#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//��ȡX
	int getX() const;

	//����X
	void setX(int X);
	
	//��ȡY
	int getY() const;
	
	//����Y
	void setY(int Y);
private:
	int X; //���X����
	int Y; //���Y����
};
