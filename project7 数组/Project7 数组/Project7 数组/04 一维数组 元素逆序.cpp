#include <iostream>
using namespace std;

int main4()
{
	//һ�����飬����洢����Ԫ��
	//�������������

	//������Ǳ�����һ��start��һ��end
	//start= len(arr) - end
	//��start��end����
	int arr[] = {1,2,3,4,5,6,7,8,9,100 };
	cout << "����ǰ" << endl;
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1 - start;
	for (;start <= end; start++,end--) 
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "�����" << endl;
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}