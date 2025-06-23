#include <iostream>
using namespace std;

int main()
{
	//switch语句
	// 给电影打分，十分制
	// 10 ~9 经典
	// 8~7 非常好
	// 6~5 一般
	// 5以下 烂片

	//1、提示用户给电影评分
	cout << "请给电影打分：" << endl;
	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3、根据用户打的分数来提示用户最后的结果
	switch(score)
	{
	case 10:
		cout << "经典电影" << endl;
		break;
	case 9:
		cout << "经典电影" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
		cout << "一般" << endl;
		break;
	case 5:
		cout << "一般" << endl;
		break;
	default :
		cout << "烂片" << endl;
		break;
	}
	cout << "switch判断时只能是整型或字符型，不可以是一个区间" << endl;

	system("pause");
	return 0;
}