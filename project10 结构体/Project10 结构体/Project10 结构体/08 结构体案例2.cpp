#include <iostream>
using namespace std;
#include <string>

//���һ��Ӣ�۵Ľṹ��
//��Ա���� �������������䣬�Ա�
//�����ṹ�����飬�����д��5��Ӣ��
//ͨ��ð��������㷨���������е�5��Ӣ�۰�����������������У����մ�ӡ�����Ľ��

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
		cout << "������" << arr[i].name << " "
			<< "���䣺" << arr[i].age << " "
			<< "�Ա�" << arr[i].sex << endl;
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
	//����Ӣ��
	hero h1 = { "����",23,"��" };
	hero h2 = { "����",22,"��" };
	hero h3 = { "�ŷ�",20,"��" };
	hero h4 = { "����",21,"��" };
	hero h5 = { "����",19,"Ů" };

	//�洢������
	hero arr[5] = {h1,h2,h3,h4,h5};

	//��ӡ
	cout << "����ǰ" << endl;
	printHero(arr, 5);
	cout << endl;

	//����
	bubbleHero(arr,5);
	//��ӡ
	cout << "�����" << endl;
	printHero(arr, 5);
	
	system("pause");
	return 0;
}