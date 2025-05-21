#include <iostream>
using namespace std;

class Base3 
{
public: 
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son33 :public Base3 
{
public:
	int m_D;
};

//利用 developer command prompt 工具查看对象模型
//跳转盘符
//跳转文件路径 cd 具体路径下
// cl /d1 reportSingleClassLayout类名 所属文件名
void test301() 
{
	//打印结果是16
	cout << "size of Son33 = " << sizeof(Son33) << endl;
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐蔽了，因此虽然继承了但访问不到
}
int main3() 
{
	test301();

	system("pause");
	return 0;
}