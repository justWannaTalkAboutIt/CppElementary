#include <iostream>
#include <string>
using namespace std;

//结构体数组
//1、定义结构体
struct Student 
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
int main2()
{
	//2、创建结构体数组
	struct Student stuArr[3] =
	{
		{"zhangsan",19,100},
		{"lisi",29,99},
		{"wangwu",38,66}
	};
	//3、给结构体数组中的元素赋值
	stuArr[2].name = "zhaoliu";
	stuArr[2].age = 90;
	stuArr[2].score = 60;

	//4、遍历结构体数组
	for (int i = 0;i<sizeof(stuArr)/sizeof(stuArr[0]);i++)
	{
		cout << "姓名：" << stuArr[i].name
			<< "年龄：" << stuArr[i].age
			<< "分数：" << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}