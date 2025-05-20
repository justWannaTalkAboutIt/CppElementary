#include <iostream>
using namespace std;

int main4()
{
	//在所有三位数中找到水仙花数

	//1、将所有三位数进行输出，100~999
	int num = 100;
	do 
	{
		int digit = 0;
		int decimal_d = 0;
		int hundred_d = 0;
		//2、找到水仙花数
		//2.1获取个位
		digit = num % 10;
		//2.2获取十位
		decimal_d = num /10 % 10;
		//2.3获取百位
		hundred_d = num / 100 % 10;
		//2.4判断
		bool flag = (digit * digit * digit + decimal_d * decimal_d * decimal_d + hundred_d * hundred_d * hundred_d == num ? 1 : 0);
		if (flag)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	

	
	system("pause");
	return 0;
}