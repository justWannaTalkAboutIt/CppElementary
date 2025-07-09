#pragma once
#include<iostream>
using namespace std;
#include<string>

//�Զ����ͨ��������

template<class T>
class MyArray 
{
public:
	//�вι���,��������
	MyArray(int capacity)
	{
		//cout << "------MyArray�вι������------" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& array) 
	{
		//���Կ���
		//cout << "------MyArray�����������------" << endl;
		this->m_Capacity = array.m_Capacity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[this->m_Capacity];
		//ֵ����
		//�費��Ҫ�ж�һ��array��ָ���Ƿ�Ϊ�գ�
		//��װ��Ϊ�հɣ��Ǹ���һ��
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}
	}

	//�ܴ����þ���������
	//operator= ��ֹǳ��������
	//����ȥ�Ĳ�����const���䣬MyArray������÷�ֹǳ����
	//���ز�����MyArray�������֧����ʽ
	//			��ʽҪ���ǡ�(a=b)=c������ʽ���ĺ͡�a=(b=c)������ʽ����
	//			������a�ȵ���b��a=c������temp =c				   a= temp
	//�ܽ�һ�£���ȫ�������:
	//			�����õĵط����������ã����ı�ĵط�������const
	//			��ע�ⲻҪ���ؾֲ����������ã�
	MyArray& operator=(const MyArray& arr) 
	{
		//cout << "------MyArray operator=��������------" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		//	��������
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity]; //����ǵ���[]����ʾ����
		//	��������
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//�ǵ÷�������
		return *this;
	}

	//β�巨
	void Push_Back(const T& val) //��ֹ�޸ģ���������
	{
		//�����ж��Ƿ�����<-->�����Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			cout << "���������ˣ�������װ��" << endl;
			return;
		}
		//���û�������뵽���һ��λ��
		this->pAddress[this->m_Size] = val;//�������ĩβ��������
		this->m_Size++;//sizeҪͬ������
	}

	//βɾ��
	//���Է��ؿ���
	void Pop_Back()//ɾ�����һ�������Բ���Ҫ�������
	{
		//�����ж��Ƿ���Ԫ�ش��ڣ�û��Ԫ�ؿ϶��޷�ɾ��
		if (this->m_Size == 0)
		{
			cout << "������Ϊ�գ�������ɾ����" << endl;
			return;
		}
		//����жϲ�Ϊ�յĻ����Ϳ���ɾ��
		this->m_Size--; //���û����ʲ������һ��Ԫ�أ���Ϊβɾ
	}

	//������������
	int getCapacity()  
	{
		return this->m_Capacity;
	}

	//�������鵱ǰ��С
	int getSize() 
	{
		return this->m_Size;
	}

	//���û�ͨ���±귽ʽ���������е�Ԫ��
	//Ҫ���÷���ֵ��Ϊ��ֵ���ڣ���Ҫ����T& arr[0] = 100
	T& operator[](int index) //����ֵ���ͼǵø�ΪT&
	{
		return this->pAddress[index];
	}

	//��������
	~MyArray()
	{
		//cout << "------MyArray������������------" << endl;
		if (this->pAddress != NULL) 
		{
			//�ǵ��ͷ�֮ǰ�ǵ��ж�
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		
	}
private:
	T* pAddress; //��ά���Ķ�������
	int m_Capacity; //��������
	int m_Size; // ������Ԫ������
};