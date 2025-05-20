#include <iostream>
using namespace std;

int main1()
{
	//数组三种定义形式
	/*
	* 1、 数据类型 数组名[长度];
	* 2、 数据类型 数组名[长度]={值1，值2，值3...};
	* 3、 数据类型 数组名[]={值1，值2，值3...};
	*/
	//1、 数据类型 数组名[长度];
	int arr[5];
	//	给数组元素赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//访问数组元素
	cout << "逐一打印arr" << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << endl;
	//2、 数据类型 数组名[长度]={值1，值2，值3...};
	int arr2[] = {10,20,30,40,50};
	// 逐一打印
	cout << "逐一打印arr2" << endl;
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	cout << endl;

	//遍历打印
	cout << "for循环打印arr2" << endl;
	for (int i=0;i<5;i++)
	{
		cout << arr2[i] << endl;
	}
	cout << endl;

	//如果没有全部赋值，未赋值元素会用0 补齐
	int arr4[] = { 1,2,3 };
	cout << "如果没有全部赋值，显示初始化int类型数组用0补齐未赋值元素" << endl;
	cout << "如果没有全部赋值，未显示初始化int类型数组用-858993460 = 0xCCCCCCCC（VS调试模式代码，未初始化标记）补齐未赋值元素" << endl;

	cout << "for循环打印arr4" << endl;
	for (int i=0;i<5;i++) 
	{
		cout << arr4[i] << endl;
	}
	cout << endl;

	//3、 数据类型 数组名[]={值1，值2，值3...};
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	//cout << sizeof(arr3) << endl;
	for (int i = 0;i < 9;i++) 
	{
		cout << arr3[i] << endl;
	}

	system("pause");
	return 0;
}