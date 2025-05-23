#include <iostream>
using namespace std;

//设计立方体类
//已知 长l 宽w 高h
//求出立方体的面积和体积
//若 长宽高分别相等，则判定两个立方体相等
//分别用全局函数和成员函数判断两个立方体是否相等

//知识点名称为const correctness ,常量正确性
//“int Cube::getW(void)”: 不能将“this”指针从“const Cube”转换为“Cube &”
//错误表明 正在const成员函数或const对象中调用非const成员函数
// void print() const {cout << getW();}//错误，getW()不是const成员函数
//const Cube c; c.getW();//错误
//此const 只能在成员函数中使用，修饰隐含的 Cube* this指针
//从 Cube* this 变为 const Cube* this

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