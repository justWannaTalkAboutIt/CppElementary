#include <iostream>
using namespace std;

int main4()
{
	/*提示用户输入一个高考考试分数，根据分数做如下判断
	分数如果大于600分视为考上一本，大于500分考上二本，大于400分考上三本，其余视为未考上本科
	在一本分数中， 大于700分考入北大，大于650分拷入清华，大于600分考入人大*/

	//1、提示输入高考分数
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;
	//2、显示高考分数
	cout << "输入的分数为" << score << endl;

	//3、判断
	//如果大于600分，一本
	// 大于700 北大
	// 大于650 清华
	// 大于600 人大
	//如果大于500分，二本
	//如果大于400分，三本
	if (score > 600)
	{
		cout << "恭喜考入一本大学" << endl;
		if (score > 700)
		{
			cout << "考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "考入清华大学" << endl;
		}
		else
		{
			cout << "考入人民大学" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜考入三本大学" << endl;
	}
	system("pause");
	return 0;
}