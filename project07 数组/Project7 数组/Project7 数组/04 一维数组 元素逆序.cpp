#include <iostream>
using namespace std;

int main4()
{
	//一个数组，里面存储整数元素
	//将数组逆序放置

	//两个标记变量，一个start，一个end
	//start= len(arr) - end
	//将start和end互换
	int arr[] = {1,2,3,4,5,6,7,8,9,100 };
	cout << "逆序前" << endl;
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1 - start;
	for (;start <= end; start++,end--) 
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "逆序后" << endl;
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}