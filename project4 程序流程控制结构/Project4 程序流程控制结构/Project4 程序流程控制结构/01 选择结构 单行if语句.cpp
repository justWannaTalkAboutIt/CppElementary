#include <iostream>
using namespace std;

int main1()
{
	// 选择结构 单行if语句
	// 用户输入分数，如果分数大于600分， 视为考上一本大学

	//1、用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	//2、打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3、判断分数是否大于600，如果大于，那么输出
	if (score > 600)
	{
		cout << "恭喜你考上了一本大学" << endl;
	}
	system("pause");
	return 0;
}