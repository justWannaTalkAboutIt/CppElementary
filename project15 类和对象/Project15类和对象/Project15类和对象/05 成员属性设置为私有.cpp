#include <iostream>
using namespace std;
#include <string>
//��Ա��������Ϊ˽��
//�����Լ����ƶ�дȨ��
//����д���Լ��������Ч��

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age<0 || age>150)
		{
			cout << "�����������󣬸�ֵʧ��" << endl;
			return;
		}
		m_Age = age;
	}
	//����ż��
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;	//���� �ɶ���д
	int m_Age=18;	//���� ֻ�� ��Ҳ����д���������0~150֮��
	string m_Idol;	//ż�� ֻд
};
int main5()
{
	Person p;
	p.setName("����");
	cout << "������" << p.getName() << endl;

	//��������
	p.setAge(169); //����p.setAge,��ʾ�� "Person" û�г�Ա "setAge"
	cout << "���䣺" << p.getAge() << endl;

	//ż������
	p.setIdol("С��");
	//cout << "ż��" << p.getIdol() << endl;// ֻд״̬�������ʲ���

	system("pause");
	return 0;
}
