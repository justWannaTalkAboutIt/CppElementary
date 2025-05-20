#include <iostream>
using namespace std;

//�����������
//��֪ ��l ��w ��h
//������������������
//�� ����߷ֱ���ȣ����ж��������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����



class Cube6 
{
public:
	int calcSurfaceArea()
	{
		return 2 * (l*w+l*h+w*h);
	}
	int calcVolume() 
	{
		return l*w*h;
	}
	int getL() 
	{
		return l;
	}
	void setL(int l)
	{
		this->l = l;
	}
	int getW()
	{
		return w;
	}
	void setW(int w) 
	{
		this->w = w;
	}
	int getH() 
	{
		return h;
	}
	void setH(int h) 
	{
		this->h = h;
	}

	bool isEqual(Cube6& c)
	{
		if (c.h == h&&c.l==l&&c.w==w)
		{
			return true;
		}
		return false;
	}
private:
	int l = 1;
	int w = 1;
	int h = 1;
};

bool isEqual6(Cube6& c1, Cube6& c2)
{
	return c1.getH();
}
int main61()
{
	Cube6 c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout << c1.calcSurfaceArea() << endl;
	cout << c1.calcVolume() << endl;

	Cube6 c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	cout << c2.calcSurfaceArea() << endl;
	cout << c2.calcVolume() << endl;

	bool res = isEqual6(c1,c2);
	cout << res << endl;

	bool res2 = c1.isEqual(c2);
	cout << res2 << endl;

	system("pause");
	return 0;
}