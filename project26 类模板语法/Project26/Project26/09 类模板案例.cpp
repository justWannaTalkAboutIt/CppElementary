#include <iostream>
using namespace std;
#include <string>
#include "MyArray.hpp" //ע�������ͷ�ļ���.hpp
//ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ��������Լ�operator=��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ��������������

//class MyArray{}Ҫʵ�ֵĹ�����
//public:
	// �вι��캯�� �� �������� ����������
	// �������캯�� �� operator= (Give and Take��������=�ȺŸ�ֵ)
	// β�巨       �� βɾ��	��������ɾ����
	// �±����     �� ��ȡ����  (��ȡԪ�� �� ��ȡ����)


//�����Զ�����������
class Person9 
{
public:
	//�ղι���
	Person9() {};
	//�вι���
	Person9(string name,int age) 
	{
		this->m_Name = name;
		this->m_Age = age;
	};
public:
	string m_Name;
	int m_Age;
};
//�����������д��Person�󣬷����ຯ��ģ���޷�ʵ����
void printPersonArr(MyArray<Person9>& arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i].m_Name << endl;
	}
}
//�����Զ�����
void test902() 
{
	MyArray<Person9> arr(10);

	Person9 p1("�����",999);
	Person9 p2("����", 30);
	Person9 p3("槼�", 20);
	Person9 p4("����", 25);
	Person9 p5("������", 27);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//print
	printPersonArr(arr);
	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;
	//�����ǰ�����С
	cout << "arr��ǰ��СΪ��" << arr.getSize() << endl;
}

template <typename T>
void printArr(MyArray<T>& arr)//MyArray���Զ������ģ�壬��Ȼ��Ϊ�����飬�������������
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test901() 
{
	//����� �������������ͽ��в���
	//�����вι��캯��
	MyArray<int> arr1(5); // ��Ϊ����ģ������Ҫ�ü�����<>ָ������
	////���Կ������캯��
	//MyArray<int> arr2(arr1); //���Կ������캯��
	////����operator=���غ���
	//MyArray<int> arr3(100);
	//arr3 = arr1;

	//����β�巨 βɾ���ȵ�
	for (int i = 0;i < 5;i++)
	{
		arr1.Push_Back(i); //����β�巨�������в�������
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printArr(arr1);//����ע��arr1�Ǹ���ģ�壬���Բ��ܼ򵥴�T*

	//����getSize
	cout << "arr1�ĵ�ǰ��СΪ��" << arr1.getSize() << endl;

	//����getCapacity
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;

	//����βɾ��
	MyArray<int> arr2(arr1); //��������
	cout << "pop back ֮ǰ arr2��" << endl;
	printArr(arr2);
	arr2.Pop_Back();
	cout << "pop back ֮�� arr2��" << endl;
	printArr(arr2);
	//��֤arr2������
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�ĵ�ǰ��СΪ��" << arr2.getSize() << endl;

	//����� ���Զ����������ͽ��в���

}

int main() 
{
	//test901();
	test902();
	system("pause");
	return 0;
}