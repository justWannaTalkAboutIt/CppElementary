#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//�ı��ļ� ���ļ�

//�Ѵ���ӱ������ó�����Ҫ����
//��һ���򿪱�����
//�ڶ��� �Ѵ����ó���
//������ �ѱ����Ź���

void test201()
{
	//1������ͷ�ļ�<fstream>
	//2������������
	ifstream ifs;
	//3�����ļ������ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "��ʧ��" << endl;
		return;
	}
	//4�������ݣ���4�ַ�����ȡ����
	//4.1 
	char buf[2048] = { 0 }; //����һ������Ϊ2048���ַ����飬char�ͣ�������Ϊbuf//��ʼ����������Ԫ��Ϊ0������д����Ϊ�ۺϳ�ʼ��
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//�����״̬���Ա����¶�ȡ
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------�ָ���4.1--------------" << endl;
	//4.2 
	char buf2[1024] = { 0 };//����һ������Ϊ1024�����飬char�ͣ�������Ϊbuf2��ȫ����ʼ��Ϊ0
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}
	//�����״̬���Ա����¶�ȡ
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------�ָ���4.2--------------" << endl;

	//4.3
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}
	//�����״̬���Ա����¶�ȡ
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------�ָ���4.3--------------" << endl;

	//4.4
	char c;
	while ((c = ifs.get()) != EOF)//ifs.get()���ص�ֵ�ȸ���c(��ʽ��ת��Ϊchar),����ifs.get()�ٺ�EOF�Ƚ�
	{
		cout << c;
	}

	//5���ر��ļ�
	ifs.close();

}
int main2()
{
	test201();

	system("pause");
	return 0;
}