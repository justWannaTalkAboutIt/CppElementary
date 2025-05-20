#include <iostream>
using namespace std;
#include <ctime>

int main2()
{
	// 猜数字
	// 随机生成一个1 到100之间的数字
	// 玩家猜测，特使猜测过大或过小
	// 猜对了，恭喜玩家胜利

	//添加随机数种子，防止每次生成的随机数都一样
	srand((unsigned int )time(NULL));
	
	//1、系统生成随机数
	int num = 1 + rand() % 100;
	//rand()%100生成1~99的随机数
	cout << num << endl;

	int val = 0;
	while (1)
	{
		//2、玩家进行猜测
		cout << "请输入你的猜测" << endl;
		cin >> val;

		//3、判断玩家的猜测
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜猜中" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}