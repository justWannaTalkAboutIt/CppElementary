#pragma once
#include<iostream>
using namespace std;
#include<string>

//自定义的通用数组类

template<class T>
class MyArray 
{
public:
	//有参构造,传入容量
	MyArray(int capacity)
	{
		//cout << "------MyArray有参构造调用------" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& array) 
	{
		//属性拷贝
		//cout << "------MyArray拷贝构造调用------" << endl;
		this->m_Capacity = array.m_Capacity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[this->m_Capacity];
		//值拷贝
		//需不需要判断一下array的指针是否为空？
		//假装不为空吧，那复制一下
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}
	}

	//能传引用尽量传引用
	//operator= 防止浅拷贝问题
	//传进去的参数，const不变，MyArray后加引用防止浅拷贝
	//返回参数，MyArray后加引用支持链式
	//			链式要考虑【(a=b)=c】这样式儿的和【a=(b=c)】这样式儿的
	//			本来是a先等于b再a=c结果变成temp =c				   a= temp
	//总结一下，安全法则就是:
	//			能引用的地方尽量用引用，不改变的地方尽量用const
	//			（注意不要返回局部变量的引用）
	MyArray& operator=(const MyArray& arr) 
	{
		//cout << "------MyArray operator=函数调用------" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		//	拷贝属性
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity]; //这里记得用[]来表示数组
		//	拷贝数据
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//记得返回自身
		return *this;
	}

	//尾插法
	void Push_Back(const T& val) //防止修改，传入引用
	{
		//首先判断是否满了<-->容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			cout << "此数组满了，不能再装了" << endl;
			return;
		}
		//如果没满，插入到最后一个位置
		this->pAddress[this->m_Size] = val;//在数组的末尾插入数据
		this->m_Size++;//size要同步更新
	}

	//尾删法
	//可以返回空吗？
	void Pop_Back()//删除最后一个，所以不需要传入参数
	{
		//首先判断是否有元素存在，没有元素肯定无法删除
		if (this->m_Size == 0)
		{
			cout << "此数组为空，不能再删除了" << endl;
			return;
		}
		//如果判断不为空的话，就可以删除
		this->m_Size--; //让用户访问不到最后一个元素，即为尾删
	}

	//返回数组容量
	int getCapacity()  
	{
		return this->m_Capacity;
	}

	//返回数组当前大小
	int getSize() 
	{
		return this->m_Size;
	}

	//让用户通过下标方式访问数组中的元素
	//要想让返回值作为左值存在，就要返回T& arr[0] = 100
	T& operator[](int index) //返回值类型记得改为T&
	{
		return this->pAddress[index];
	}

	//析构函数
	~MyArray()
	{
		//cout << "------MyArray析构函数调用------" << endl;
		if (this->pAddress != NULL) 
		{
			//记得释放之前记得判断
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		
	}
private:
	T* pAddress; //所维护的堆区数组
	int m_Capacity; //数组容量
	int m_Size; // 数组内元素数量
};