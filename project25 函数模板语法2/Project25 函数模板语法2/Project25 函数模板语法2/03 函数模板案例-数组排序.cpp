#include <iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
// ���� �Ӵ�С
// �㷨 ѡ��
// ���� char ���� int ����

//print��·
template <typename T>
void myPrint(const T& arr,const int length)
//void myPrint(T arr[], int len)
{
	for (int i = 0;i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//������·
template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//������·
template <typename T>
void mySort(T* arr,int length)
{
	for (int i = 0;i<length-1;i++)
	{
		int max = i;
		for (int j = i+1;j < length;j++)
		{
			if (arr[max]<arr[j]) 
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i) //��maxֵ���ģ���˵����arr[j]��arr[max]���󣬴�ʱ����
		{
			mySwap<T>(arr[i], arr[max]);
		}
	}
}

void test301() 
{
	//����char����
	char charArr[] = "badcfe";
	char num = sizeof(charArr) / sizeof(char);
	//myPrint<char*>(charArr,num);//����ע��������������Ӧ����ָ��
	myPrint(charArr, num);
	mySort(charArr,num);
	myPrint(charArr, num);


}

void test302() 
{
	//����int����
	int intArr[] = {7,5,1,3,9,2,4,6,8};
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr,num);
	myPrint(intArr,num);
}

int main3() 
{
	//test301();
	test302();
	system("pause");
	return 0;
}