#include <iostream>
using namespace std;

//��̬

class Animal1 
{
public:
	virtual void speak() 
	{
		cout << " ������˵��" << endl;
	}
};

class Cat1 : public Animal1 
{
public:
	virtual void speak() 
	{
		cout << "^-^Сè��˵��" << endl;
	}
};

class Dog:public Animal1 
{
public:
	virtual void speak() 
	{
		cout << " =-=С����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�ڱ���׶ΰ󶨣���Ҫ�����н׶ν��а󶨣�Ҳ���ǵ�ַ���
//����֮����Ҫ�ڻ����еķ���ǰ���virtualʹ֮����麯��
void doSpeak(Animal1& Animal1) // Animal1& Animal1 = Cat1 Cat1 ����ָ�����ֱ��ָ���������
{
	//��ַ��󶨣� �ڱ���׶�ȷ��������ַ
	Animal1.speak();

}
//��̬��̬������������
// 1���м̳й�ϵ
// 2��������д�����麯��
// ps:������д�����麯��ʱvirtual�ؼ��ֿ���дҲ���Բ�д
// 
//��̬��̬��ʹ�ã�
// ��������(ָ��) ָ����������
//���Ժ���
void test101() 
{
	Cat1 Cat1;
	doSpeak(Cat1); //Animal1& Animal1 = Cat1 Cat1,�������ý���һ���������

	Dog dog;
	doSpeak(dog);

}
void test102() 
{
	cout << "size of Animal1 = " << sizeof(Animal1) << endl;
}
int main1() 
{
	test101();//�����������˵����

	test102();//��СΪ4��һ��ָ��Ĵ�С

	system("pause");
	return 0;
}