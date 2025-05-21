#include <iostream>
using namespace std;
#include <string>

//多态案例2 制作饮品

class AbstractDrinking 
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSth() = 0;
	//制作饮品
	void makeDrink() 
	{
		Boil();
		Brew();
		PourInCup();
		PutSth();
	}
};

//制作咖啡
class Coffee : public AbstractDrinking 
{
	//煮水
	void Boil() 
	{
		cout << "正在为咖啡 煮水ing" << endl;
	}
	//冲泡
	void Brew() 
	{
		cout << "冲泡咖啡 哗啦 哗啦" << endl;
	};
	//倒入杯中
	void PourInCup()
	{
		cout << "******** 咖啡倒入杯中" << endl;
	}
	//加入辅料
	void PutSth() 
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶
class Tea : public AbstractDrinking
{
	//煮水
	void Boil()
	{
		cout << "正在为茶 煮水ing" << endl;
	}
	//冲泡
	void Brew()
	{
		cout << "冲泡茶 咕嘟 咕嘟" << endl;
	};
	//倒入杯中
	void PourInCup()
	{
		cout << "-------- 茶倒入杯中" << endl;
	}
	//加入辅料
	void PutSth()
	{
		cout << "加入枸杞 " << endl;
	}
};
//制作函数
void doWork(AbstractDrinking& absDrinking) 
{
	absDrinking.makeDrink();
	//使用完后要记得释放哦(如果是指针)
	//delete absDrinking;
}
//测试函数
void test401() 
{
	Coffee coffee;
	doWork(coffee);
	cout << "---------分割线----------" << endl;
	Tea tea;
	doWork(tea);
}
int main4() 
{
	test401();

	system("pause");
	return 0;
}
