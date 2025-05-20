#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//1个老师带5个学生，共有3个老师
//老师的成员变量有 姓名，1个存放5个学生的数组
//学生的成员变量有 姓名，考试分数
//创建数组存放3名老师，通过函数给每个老师和所带的学生赋值
//打印出老师数据及老师所带学生的数据
struct Student 
{
	string name;
	int score;
};

struct Teacher 
{
	string name;
	Student sArr[5];
};

void allocateSpace(Teacher tArr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		string nameseed = "ABCDE";
		tArr[i].name = "Teacher_";
		tArr[i].name += nameseed[i];
		//cout << i << " " << tArr[i].name << endl;
		for (int j = 0;j < 5;j++)
		{
			//姓名
			tArr[i].sArr[j].name = "Student_";
			tArr[i].sArr[j].name += nameseed[j];
			//分数
			int random = rand() % 61 + 40;
			tArr[i].sArr[j].score = random;
		}
	}
}
void printInfo(Teacher tArr[],int len)
{
	for (int i=0;i<len;i++)
	{
		cout << tArr[i].name << endl;
		for (int j=0;j<5;j++)
		{
			cout << "\t"<<"学生的姓名：" << tArr[i].sArr[j].name 
				<<"\t"<< "学生的分数："<< tArr[i].sArr[j].score <<endl;
		}
	}
}

int main7()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建3名老师的数组
	Teacher tArr[3];
	
	//2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	allocateSpace(tArr,3);

	//3、打印
	printInfo(tArr,3);
	system("pause");
	return 0;
}