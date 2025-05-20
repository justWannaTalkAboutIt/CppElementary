#include <iostream>
using namespace std;
#include <string>

//设计一个英雄的结构体
//成员变量 包括姓名，年龄，性别
//创建结构体数组，数组中存放5名英雄
//通过冒泡排序的算法，将数组中的5名英雄按照年龄进行升序排列，最终打印排序后的结果

struct hero 
{
	string name;
	int age;
	string sex;
};

void printHero(hero arr[],int len)
{
	for (int i = 0;i < len;i++) 
	{
		cout << "姓名：" << arr[i].name << " "
			<< "年龄：" << arr[i].age << " "
			<< "性别：" << arr[i].sex << endl;
	}
}

void bubbleHero(hero arr[], int len)
{
	for (int i = 0;i < len - 1;i++) 
	{
		for (int j=0;j<len-1-i;j++) 
		{
			if (arr[j].age > arr[j+1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main8()
{
	//创建英雄
	hero h1 = { "刘备",23,"男" };
	hero h2 = { "关羽",22,"男" };
	hero h3 = { "张飞",20,"男" };
	hero h4 = { "赵云",21,"男" };
	hero h5 = { "貂蝉",19,"女" };

	//存储进数组
	hero arr[5] = {h1,h2,h3,h4,h5};

	//打印
	cout << "排序前" << endl;
	printHero(arr, 5);
	cout << endl;

	//排序
	bubbleHero(arr,5);
	//打印
	cout << "排序后" << endl;
	printHero(arr, 5);
	
	system("pause");
	return 0;
}