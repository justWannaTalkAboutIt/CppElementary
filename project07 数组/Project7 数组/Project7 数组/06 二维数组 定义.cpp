#include <iostream>
using namespace std;

int main6()
{
	//二维数组的定义方式

	/*
	* 1、 类型 数组名[行][列];
	* 2、 类型 数组名[行][列] = {{值1，值2}，{值1，值2}}；
	* 3、 类型 数组名[行][列] = {值1，值2，值3，值4}；
	* 4、 类型 数组名[][列] = {值1，值2，值3，值4}；
	*/

	//1、 类型 数组名[行][列];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	//for循环输出
	for (int i = 0;i < 2;i++) 
	{
		for (int j = 0;j < 3;j++) 
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//2、类型 数组名[行][列] = {{值1，值2}，{值1，值2}}；
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//for循环输出
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//3、 类型 数组名[行][列] = {值1，值2，值3，值4}；
	int arr3[2][3] = {1,1,1,2,2,2};
	//for循环输出
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//4、类型 数组名[][列] = {值1，值2，值3，值4}；
	int arr4[][3] = {2,3,4,5,6,7};
	//for循环输出
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}