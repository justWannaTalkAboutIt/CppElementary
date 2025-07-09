#include <iostream>
using namespace std;

//类模板与继承
template <class T>
class Base 
{
	T m;
};

//继承时，必须要知道父类中T的类型，才能继承给子类（否则无法分配内存）
//class Son :public Base //会报错：缺少类模板base的参数列表
class Son: public Base<int>
{
	
};

void test501() 
{
	Son s1;
}

//若想灵活的指定父类中的T类型，子类也需要变成类模板
template<class T1,class T2>
class Son2 :public Base<T1> 
{
public:
	Son2() 
	{
		cout << "T1 的类型为：" << typeid(T1).name() << endl;
		cout << "T2 的类型为：" << typeid(T2).name() << endl;

	}
	T2 obj;
};

void test502() 
{
	Son2<int,char> s2;
}

int main5() 
{
	//test501();
	test502();
	system("pause");
	return 0;
}