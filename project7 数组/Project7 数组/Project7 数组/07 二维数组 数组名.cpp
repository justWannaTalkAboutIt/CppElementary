#include <iostream>
using namespace std;

int main7()
{
	//二维数组名称用途
	//1、查看二维数组内存空间大小
	//2、查看二维数组的首地址
	
	//1、查看二维数组内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2、查看二维数组的首地址
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组第一行的首地址为：" << (int)arr[0] << endl;
	cout << "二维数组的第二行首地址为：" << (int)arr[1] << endl;

	cout << "二维数组第一个元素首地址：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址：" << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}