#include <iostream>
using namespace std;

int main()
{
	//按格式打印乘法口诀表

	for (int i = 1; i < 10; i++) 
	{
		for (int j = 0; j<i;j++)
		{
			cout << j + 1 << "*" <<i << "="<<(i*(j+1))<< " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}