#include <iostream>
using namespace std;
#include <string>
#include "MyArray.hpp" //注意这里的头文件是.hpp
//实现一个通用的数组类，要求如下：
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝函数以及operator=防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量

//class MyArray{}要实现的功能有
//public:
	// 有参构造函数 和 析构函数 （生与死）
	// 拷贝构造函数 和 operator= (Give and Take：拷贝与=等号赋值)
	// 尾插法       和 尾删法	（插入与删除）
	// 下标访问     和 获取属性  (获取元素 和 获取属性)


//测试自定义数据类型
class Person9 
{
public:
	//空参构造
	Person9() {};
	//有参构造
	Person9(string name,int age) 
	{
		this->m_Name = name;
		this->m_Age = age;
	};
public:
	string m_Name;
	int m_Age;
};
//这个函数必须写在Person后，否则类函数模板无法实例化
void printPersonArr(MyArray<Person9>& arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i].m_Name << endl;
	}
}
//测试自定义类
void test902() 
{
	MyArray<Person9> arr(10);

	Person9 p1("孙悟空",999);
	Person9 p2("韩信", 30);
	Person9 p3("妲己", 20);
	Person9 p4("赵云", 25);
	Person9 p5("安其拉", 27);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//print
	printPersonArr(arr);
	//输出容量
	cout << "arr容量为：" << arr.getCapacity() << endl;
	//输出当前数组大小
	cout << "arr当前大小为：" << arr.getSize() << endl;
}

template <typename T>
void printArr(MyArray<T>& arr)//MyArray是自定义的类模板，虽然行为像数组，但本质是类对象
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test901() 
{
	//罗马Ⅰ 对内置数据类型进行测试
	//测试有参构造函数
	MyArray<int> arr1(5); // 因为是类模板所以要用尖括号<>指定类型
	////测试拷贝构造函数
	//MyArray<int> arr2(arr1); //测试拷贝构造函数
	////测试operator=重载函数
	//MyArray<int> arr3(100);
	//arr3 = arr1;

	//测试尾插法 尾删法等等
	for (int i = 0;i < 5;i++)
	{
		arr1.Push_Back(i); //利用尾插法向数组中插入数据
	}

	cout << "arr1的打印输出为：" << endl;
	printArr(arr1);//这里注意arr1是个类模板，所以不能简单传T*

	//测试getSize
	cout << "arr1的当前大小为：" << arr1.getSize() << endl;

	//测试getCapacity
	cout << "arr1的容量为：" << arr1.getCapacity() << endl;

	//测试尾删法
	MyArray<int> arr2(arr1); //拷贝构造
	cout << "pop back 之前 arr2：" << endl;
	printArr(arr2);
	arr2.Pop_Back();
	cout << "pop back 之后 arr2：" << endl;
	printArr(arr2);
	//验证arr2的属性
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的当前大小为：" << arr2.getSize() << endl;

	//罗马Ⅱ 对自定义数据类型进行测试

}

int main() 
{
	//test901();
	test902();
	system("pause");
	return 0;
}