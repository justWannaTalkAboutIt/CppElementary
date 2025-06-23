#include <iostream>
using namespace std;

int main6()
{
	//敲桌子
	//先输出从1到100 这些数字

	//从1 到100中找到特殊数字，改为输出“敲桌子”
	// 7的倍数 7 14 21 28....
	// 个位有7 7 17 27 ...
	// 十位有7 70 71 72 ...

	for (int i = 1; i<101;i++)
	{
		bool flag_a = (i % 7 == 0?1:0); // i是7的倍数
		bool flag_b = (i % 10 == 7 ? 1 : 0); // i的个位数是7
		bool flag_c = (i / 10 == 7 ? 1:0); // i 的十位数是7
		if (flag_a||flag_b||flag_c)
		{
			//cout << flag_a << flag_b << flag_c << endl;
			cout << "敲桌子" << endl;
		}
		else
		{
			//cout << flag_a << flag_b << flag_c << endl;
			cout << i << endl;
		}
		
	}
	system("pause");
	return 0;
}