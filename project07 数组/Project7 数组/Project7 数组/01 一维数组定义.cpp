#include <iostream>
using namespace std;

int main1()
{
	//�������ֶ�����ʽ
	/*
	* 1�� �������� ������[����];
	* 2�� �������� ������[����]={ֵ1��ֵ2��ֵ3...};
	* 3�� �������� ������[]={ֵ1��ֵ2��ֵ3...};
	*/
	//1�� �������� ������[����];
	int arr[5];
	//	������Ԫ�ظ�ֵ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//��������Ԫ��
	cout << "��һ��ӡarr" << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << endl;
	//2�� �������� ������[����]={ֵ1��ֵ2��ֵ3...};
	int arr2[] = {10,20,30,40,50};
	// ��һ��ӡ
	cout << "��һ��ӡarr2" << endl;
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	cout << endl;

	//������ӡ
	cout << "forѭ����ӡarr2" << endl;
	for (int i=0;i<5;i++)
	{
		cout << arr2[i] << endl;
	}
	cout << endl;

	//���û��ȫ����ֵ��δ��ֵԪ�ػ���0 ����
	int arr4[] = { 1,2,3 };
	cout << "���û��ȫ����ֵ����ʾ��ʼ��int����������0����δ��ֵԪ��" << endl;
	cout << "���û��ȫ����ֵ��δ��ʾ��ʼ��int����������-858993460 = 0xCCCCCCCC��VS����ģʽ���룬δ��ʼ����ǣ�����δ��ֵԪ��" << endl;

	cout << "forѭ����ӡarr4" << endl;
	for (int i=0;i<5;i++) 
	{
		cout << arr4[i] << endl;
	}
	cout << endl;

	//3�� �������� ������[]={ֵ1��ֵ2��ֵ3...};
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	//cout << sizeof(arr3) << endl;
	for (int i = 0;i < 9;i++) 
	{
		cout << arr3[i] << endl;
	}

	system("pause");
	return 0;
}