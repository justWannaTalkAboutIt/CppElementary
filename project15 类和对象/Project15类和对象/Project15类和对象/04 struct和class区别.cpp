#include <iostream>
using namespace std;

class C1
{
	int m_A; //默认权限 私有
};

struct C2 
{
	int m_A; //默认权限 公共
};
int main4()
{
	//struct和class区别
	//struct 默认权限是公共 public
	//class  默认权限是私有 private
	C1 c1;
	C2 c2;

	//c1.m_A;//成员 "C1::m_A" (已声明 所在行数:6) 不可访问
	c2.m_A = 100;
	system("pause");
	return 0;
}