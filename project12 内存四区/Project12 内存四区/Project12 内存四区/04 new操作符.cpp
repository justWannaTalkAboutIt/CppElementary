#include <iostream>
using namespace std;

//1、new的基本语法
int* func() 
{
	//在堆区创建整型数据
	//new返回 该数据类型的指针
	int* p = new int(10);
	return p;
}
//2、在堆区利用new开辟数组
void test01() 
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区数据由程序员管理开辟，程序员管理释放
	delete p;
	//cout << *p << endl; // 内存已经被释放，再次访问就是非法操作，会报错
}

void test02() 
{
	//创建10整型数据的数组，在堆区
	int* arr = new int[10];
	for (int i=0;i<10;i++) 
	{
		arr[i] = i + 100; //给10个元素赋值，100~109
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[] arr;
}
int main() 
{
	//test01();

	test02();
	system("pause");
	return 0;
}