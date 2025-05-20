#include <iostream>
using namespace std;

const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径

class Circle 
{
	//访问权限
public:
	//圆的属性
	int m_r; //半径
	//圆的行为
	double calcCirc()
	{
		return 2 * PI * m_r;
	}
};
int main2() 
{
	//通过圆类 创建具体的圆（对象）
	Circle cl;
	//给圆对象 的属性进行赋值
	cl.m_r = 10;
	//2*PI*10=62.8
	cout << "圆的周长为：" << cl.calcCirc() << endl;

	system("pause");
	return 0;
}