#include <iostream>
using namespace std;

int main2()
{
	//continue
	//奇数输出，偶数不输出
	for (int i=0;i< 10;i++)
	{
		if (i%2==0)
		{
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}