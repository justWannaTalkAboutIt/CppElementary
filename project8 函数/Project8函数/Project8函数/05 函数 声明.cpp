#include <iostream>
using namespace std;

//函数的声明
//比较函数max，实现两个整型数字比较，返回较大的数
int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	printf("\n");
	cout << "函数编译器从上到下依次执行" << endl;
	cout << "但如果main函数在先，自定义函数在后，依次执行的编译器在main调用时找不到自定义函数,会报错" << endl;
	cout << "想将自定义函数写在main函数后面，且避免报错，首先声明函数，再在main函数后定义函数" << endl;
	printf("\n");
	cout << "声明可以写多次，定义只能写一次" << endl;

	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}