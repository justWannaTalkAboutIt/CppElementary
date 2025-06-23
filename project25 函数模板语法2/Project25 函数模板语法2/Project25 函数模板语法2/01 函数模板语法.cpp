#include <iostream>
using namespace std;

//函数模板

//两个整型交换的函数
void swapInt(int& a,int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//两个浮点型交换函数
void swapDouble(double& a,double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
//函数模板
template <typename T> //声明一个模板，告诉编译器后面的代码中紧跟着的T不要报错，T是一个数据类型
void mySwap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//test 
void test101() 
{
	int a = 10;
	int b = 20;

	cout << "-------------交换前-------------" << endl;
	cout << "a = "<< a << endl;
	cout << "b = " << b << endl;
	swapInt(a,b);
	cout << "-------------交换后-------------" << endl;
	cout << "a = "<< a << endl;
	cout << "b = " << b << endl;
	
	a = 10;
	b = 20;
	cout << "-------------交换前-------------" << endl;
	cout << "a = "<< a << endl;
	cout << "b = " << b << endl;
	//mySwap1(a,b);//自动类型推导
	mySwap1<int>(a, b); //显示类型转换
	cout << "-------------交换后-------------" << endl;
	cout << "a = "<< a << endl;
	cout << "b = " << b << endl;
	
	
	double c = 1.1;
	double d = 2.2;
	cout << "-------------交换前-------------" << endl;
	cout << "c = "<< c << endl;
	cout << "d = " << d << endl;
	swapDouble(c,d);
	cout << "-------------交换后-------------" << endl;
	cout << "c = "<< c << endl;
	cout << "d = " << d << endl;
}


int main1() 
{
	test101();
	//在test101中实现了两个函数，分别交换整型和double型数字
	//然而在C++中，除了int和double还有其他内置类型以及无数个自定义类型
	//（那么问题来了：）如何将所有类型交换通过一个函数/类 实现呢？
		//这就需要在高于函数/类 的层面来考虑“类型”的概念//这个说法GPT说不对，因为模板并没有高于函数
		//也许这就是要将模板写在函数定义之前的原因？与装饰器同样在更高层面思考//这个gpt说也不对，写前面是为了让编译器认识
	//更准确的认识：
	//为了解决提出的问题，换一个角度，从把“类型当成变量的角度”来思考，
	//我们可以写一个函数，它的参数不仅是值，还有“类型”这个变量
	//这样一个函数可以处理多种类型，只要把“类型”传进去即可
	//也就是“类型参数化”== “把类型和参数都写成活的”
	system("pause");
	return 0;
}