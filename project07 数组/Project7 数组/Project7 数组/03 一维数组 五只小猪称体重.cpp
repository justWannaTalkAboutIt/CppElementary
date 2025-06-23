#include <iostream>
using namespace std;

int main3()
{
	//一个数组记录了五只小猪的体重 300，350，200，400，250
	//找出并打印最重的小猪的体重
	
	//1、初始化数组，存储体重
	int arr[5] = { 300,350,200,400,250 };
	//2、逐一访问，如果一个元素比我认定的要大，更新最大值
	int max = 0;
	for (int i=0;i<5;i++) 
	{
		cout << arr[i] << endl;
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	//3、打印
	cout << "最重的小猪是：" << endl;
	cout << max << endl;
	system("pause");
	return 0;
}