#include <iostream>
using namespace std;

int main()
{
	//二维数组案例应用
	//		语文	数学	英语
	//张三	100		100		100
	//李四	90		50		100
	//王五	60		70		80
	//分别输出三名同学的总成绩

	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	
	for (int i = 0;i<3;i++)
	{
		int score = 0;
		for (int j= 0;j<3;j++) 
		{
			score += arr[i][j];
			cout << arr[i][j] << "\t" ;
		}
		cout << score << " ";
		cout << endl;
	}


	system("pause");
	return 0;
}