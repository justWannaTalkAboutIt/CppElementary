#include <iostream>
using namespace std;

int main6()
{
	//指针和数组
	//利用指针访问数组里的元素
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "第一个元素为：" << arr[0]<<endl;

	int* p = arr;
	cout << *p << endl;

	p++;
	cout << *p << endl;

	//利用指针遍历数组
	cout << "利用指针遍历数组" << endl;
	for (int* p = arr;p<=&arr[9];p++)
	{
		cout << *p << endl;
	}

	system("pause");
	return 0;
}