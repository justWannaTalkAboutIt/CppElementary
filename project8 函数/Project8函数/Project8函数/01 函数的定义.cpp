#include<iostream>
using namespace std;

// �����Ķ���
// �﷨
// ����ֵ���� �������������б�{������ return}
int add1(int num1,int num2) 
{
	int sum = num1 + num2;
	return sum;
}


int main1()
{
	int sum = add1(1,2);
	cout << sum << endl;
	system("pause");
	return 0;
}