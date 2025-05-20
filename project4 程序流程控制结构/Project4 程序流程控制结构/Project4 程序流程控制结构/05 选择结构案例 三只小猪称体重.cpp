#include <iostream>
using namespace std;

int main5()
{
	//三只小猪称体重，比较A,B,C谁最重
	// 先判断A和B谁重，A重 比较A 和C，A重，结果是A最重
	//                                C重，结果是C最重
	//                 B重 比较B和C， B重，结果B最重
	//                                C重，结果C最重
	
	//1、创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2、让用户输入三只小猪的体重
	cout << "请输入小猪A的体重：" << endl;
	cin >> num1;

	cout << "请输入小猪B的体重：" << endl;
	cin >> num2;

	cout << "请输入小猪C的体重：" << endl;
	cin >> num3;

	cout << "小猪A的体重为：" << num1 << endl;
	cout << "小猪B的体重为：" << num2 << endl;
	cout << "小猪C的体重为：" << num3 << endl;

	//3、判断
	if (num1>num2) 
	{
		if (num1>num3) 
		{
			cout << "A最重" << endl;
		}
		else if (num1 < num3)
		{
			cout << "C最重" << endl;
		}
		else
		{
			cout << "A和C 最重" << endl;
		}
	}
	else if (num1 < num2)
	{
		if (num2 > num3)
		{
			cout << "B最重" << endl;
		}
		else if (num2 < num3)
		{
			cout << "C最重" << endl;
		}
		else
		{
			cout << "B和C最重" << endl;
		}
	}
	else
	{
		if (num1 > num3)
		{
			cout << "A和B最重" << endl;
		}
		else if (num1 < num3)
		{
			cout << "C最重" << endl;
		}
		else 
		{
			cout << "A B C 一样重" << endl;
		}
	}
	system("pause");
	return 0;
}