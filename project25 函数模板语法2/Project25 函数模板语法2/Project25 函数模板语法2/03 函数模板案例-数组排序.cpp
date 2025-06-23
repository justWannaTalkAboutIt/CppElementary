#include <iostream>
using namespace std;

//实现通用 对数组进行排序的函数
// 规则 从大到小
// 算法 选择
// 测试 char 数组 int 数组

//print套路
template <typename T>
void myPrint(const T& arr,const int length)
//void myPrint(T arr[], int len)
{
	for (int i = 0;i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//交换套路
template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序套路
template <typename T>
void mySort(T* arr,int length)
{
	for (int i = 0;i<length-1;i++)
	{
		int max = i;
		for (int j = i+1;j < length;j++)
		{
			if (arr[max]<arr[j]) 
			{
				max = j;//更新最大值下表
			}
		}
		if (max != i) //若max值更改，则说明有arr[j]比arr[max]更大，此时更换
		{
			mySwap<T>(arr[i], arr[max]);
		}
	}
}

void test301() 
{
	//测试char数组
	char charArr[] = "badcfe";
	char num = sizeof(charArr) / sizeof(char);
	//myPrint<char*>(charArr,num);//这里注意数组名的类型应该是指针
	myPrint(charArr, num);
	mySort(charArr,num);
	myPrint(charArr, num);


}

void test302() 
{
	//测试int数组
	int intArr[] = {7,5,1,3,9,2,4,6,8};
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr,num);
	myPrint(intArr,num);
}

int main3() 
{
	//test301();
	test302();
	system("pause");
	return 0;
}