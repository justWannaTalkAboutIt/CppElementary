#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//������д�ļ�
class Person 
{
public:
	char m_Name[64];//����
	int m_Age;//����
};

void test301() 
{
	//1������ͷ�ļ�
	//2���������ļ�
	ofstream ofs;
	//3�����ļ�
	ofs.open("Person.txt",ios::out|ios::binary); //����open���ļ�
	//��ֱ�� 
	//ofstream ofs("Person.txt",ios::out| ios::binary); //���ù��캯�����ļ�
	//4��д�ļ�
	Person p = {"����",18};
	ofs.write((const char *) & p,sizeof(Person)); //д������ַ��Ҫת��const char*
	//5���ر��ļ�
	ofs.close();
}
int main3() 
{
	test301();
	system("pause");
	return 0;
}