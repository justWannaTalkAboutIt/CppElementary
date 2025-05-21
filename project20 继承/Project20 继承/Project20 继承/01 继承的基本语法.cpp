#include <iostream>
using namespace std;

//普通实现界面
////Java页面
//class Java 
//{
//public:
//	void header() 
//	{
//		cout << "首页，公开课，登录，注册。。。（公共头部）" << endl;
//	}
//	void footer() 
//	{
//		cout << "帮助中心，交流合作，站内地图。。。（公共底部）" << endl;
//	}
//	void left() 
//	{
//		cout << "Java,Pythom,C++。。。（公共分类列表）" << endl;
//	}
//	void content() 
//	{
//		cout << "Java学科的视频" << endl;
//	}
//};
////Python界面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册。。。（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图。。。（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Pythom,C++。。。（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科的视频" << endl;
//	}
//};
//
////cpp界面
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册。。。（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图。。。（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Pythom,C++。。。（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Cpp学科的视频" << endl;
//	}
//};

//继承实现界面
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册。。。（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图。。。（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java,Pythom,C++。。。（公共分类列表）" << endl;
	}
};
//Java界面
class Java : public BasePage 
{
public:
	void content() 
	{
		cout << "Java学科视频" << endl;
	}
};
//Python界面
class Python : public BasePage 
{
public:
	void content() 
	{
		cout << "python学科视频" << endl;
	}
};
//cpp界面
class Cpp: public BasePage 
{
public:
	void content() 
	{
		cout << "Cpp学科视频" << endl;
	}
};


void test101() 
{
	cout << "Java 下载视频界面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------fengexian------------" << endl;

	cout << "python 下载视频界面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------fengexian------------" << endl;
	
	cout << "cpp 下载视频界面如下：" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------fengexian------------" << endl;
}
//继承的好处：减少重复代码
//语法： class 子类: 继承方式 父类

int main1() 
{
	test101();

	system("pause");
	return 0;
}