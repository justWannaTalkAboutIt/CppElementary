#include<iostream>
using namespace std;
#include<vector> 
#include<algorithm>

//vector容器存放内置数据类型
void myPrint1(int val)
{
	cout << val << endl;
}
void test101() 
{
	//创建一个vector容器，数组
	vector<int>v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);


	////通过迭代器来访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中的第一个元素
	//vector<int>::iterator itEnd = v.end(); // 结束迭代器 指向容器中最后一个元素的【下一个】

	////第一种遍历
	//while (itBegin!=itEnd)
	//{
	//	cout << *itBegin << endl; //访问且打印
	//	itBegin++;//往后挪一位
	//}

	////第二种遍历
	//for (vector<int>::iterator it = v.begin();it != v.end();it++)
	//{
	//	cout << *it << endl;
	//}

	//第三种 遍历
	for_each(v.begin(), v.end(), myPrint1);//只写函数名，为回调技术
}

int main1() 
{
	test101();
	system("pause");
	return 0;
}
