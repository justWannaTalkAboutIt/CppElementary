#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//1����ʦ��5��ѧ��������3����ʦ
//��ʦ�ĳ�Ա������ ������1�����5��ѧ��������
//ѧ���ĳ�Ա������ ���������Է���
//����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//��ӡ����ʦ���ݼ���ʦ����ѧ��������
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
			//����
			tArr[i].sArr[j].name = "Student_";
			tArr[i].sArr[j].name += nameseed[j];
			//����
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
			cout << "\t"<<"ѧ����������" << tArr[i].sArr[j].name 
				<<"\t"<< "ѧ���ķ�����"<< tArr[i].sArr[j].score <<endl;
		}
	}
}

int main7()
{
	//���������
	srand((unsigned int)time(NULL));

	//1������3����ʦ������
	Teacher tArr[3];
	
	//2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	allocateSpace(tArr,3);

	//3����ӡ
	printInfo(tArr,3);
	system("pause");
	return 0;
}