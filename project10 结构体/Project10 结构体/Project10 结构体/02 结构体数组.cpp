#include <iostream>
#include <string>
using namespace std;

//�ṹ������
//1������ṹ��
struct Student 
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
int main2()
{
	//2�������ṹ������
	struct Student stuArr[3] =
	{
		{"zhangsan",19,100},
		{"lisi",29,99},
		{"wangwu",38,66}
	};
	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArr[2].name = "zhaoliu";
	stuArr[2].age = 90;
	stuArr[2].score = 60;

	//4�������ṹ������
	for (int i = 0;i<sizeof(stuArr)/sizeof(stuArr[0]);i++)
	{
		cout << "������" << stuArr[i].name
			<< "���䣺" << stuArr[i].age
			<< "������" << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}