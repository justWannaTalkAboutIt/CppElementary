#include <iostream>
using namespace std;

//�����������
//��֪ ��l ��w ��h
//������������������
//�� ����߷ֱ���ȣ����ж��������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

//֪ʶ������Ϊconst correctness ,������ȷ��
//��int Cube::getW(void)��: ���ܽ���this��ָ��ӡ�const Cube��ת��Ϊ��Cube &��
//������� ����const��Ա������const�����е��÷�const��Ա����
// void print() const {cout << getW();}//����getW()����const��Ա����
//const Cube c; c.getW();//����
//��const ֻ���ڳ�Ա������ʹ�ã����������� Cube* thisָ��
//�� Cube* this ��Ϊ const Cube* this

class Cube
{
public:
	int calcSurfaceArea() const
	{
		return 2 * (l * w + l * h + w * h);
	}
	int calcVolume() const
	{
		return l * w * h;
	}
	int getL() const
	{
		return l;
	}
	void setL(int l)
	{
		this->l = l;
	}
	int getW()const
	{
		return w;
	}
	void setW(int w)
	{
		this->w = w;
	}
	int getH()const
	{
		return h;
	}
	void setH(int h)
	{
		this->h = h;
	}

	bool isEqual(const Cube& c) const
	{
		return c.h == h && c.l == l && c.w == w;
	}
private:
	int l = 1;
	int w = 1;
	int h = 1;
};

bool isEqual(const Cube& c1, const Cube& c2)
{
	return c1.getH()==c2.getH()&& c1.getL()==c2.getL()&&c1.getW()==c2.getW();
}
int main62()
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout << c1.calcSurfaceArea() << endl;
	cout << c1.calcVolume() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	cout << c2.calcSurfaceArea() << endl;
	cout << c2.calcVolume() << endl;

	bool res = isEqual(c1, c2);
	cout << res << endl;

	bool res2 = c1.isEqual(c2);
	cout << res2 << endl;

	system("pause");
	return 0;
}