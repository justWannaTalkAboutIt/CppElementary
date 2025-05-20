#include <iostream>
using namespace std;

int main7()
{
	//利用嵌套循环实现星图

	//打印一行
	for (int i=0;i<10;i++)
	{
		for (int i = 0;i < 10;i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << "外层执行一次，内层执行一周" << endl;
	
	system("pause");
	return 0;
}