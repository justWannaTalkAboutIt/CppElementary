#include<iostream>
using namespace std;
#include<vector>

//容器嵌套容器
void test301() 
{
	vector<vector<int>> v;
	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//向小容器中添加容器
	for (int i = 0;i < 4;i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	//将小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器，把所有数据遍历一边
	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++) 
	{
		vector<int> haha = (*it);
		for (vector<int>::iterator jit = haha.begin();jit != haha.end();jit++)
		{
			int hehe = *jit;
			cout << hehe << " ";
		}
		cout << endl;
	}
}

int main3()
{
	test301();

	system("pause");
	return 0;
}
