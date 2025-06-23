#include <iostream>
using namespace std;

int main4()
{
	//野指针 指针变量指向非法内存空间
	//在宾馆中没开房卡就随便开门
	//越界
	int* p = (int*)0x1100;

	cout << *p << endl;

	cout << "空指针和野指针都不是我们自己在宾馆前台申请的房间，不要去访问它" << endl;

	system("pause");
	return 0;
}