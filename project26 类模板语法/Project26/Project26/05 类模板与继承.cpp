#include <iostream>
using namespace std;

//��ģ����̳�
template <class T>
class Base 
{
	T m;
};

//�̳�ʱ������Ҫ֪��������T�����ͣ����ܼ̳и����ࣨ�����޷������ڴ棩
//class Son :public Base //�ᱨ��ȱ����ģ��base�Ĳ����б�
class Son: public Base<int>
{
	
};

void test501() 
{
	Son s1;
}

//��������ָ�������е�T���ͣ�����Ҳ��Ҫ�����ģ��
template<class T1,class T2>
class Son2 :public Base<T1> 
{
public:
	Son2() 
	{
		cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;

	}
	T2 obj;
};

void test502() 
{
	Son2<int,char> s2;
}

int main5() 
{
	//test501();
	test502();
	system("pause");
	return 0;
}