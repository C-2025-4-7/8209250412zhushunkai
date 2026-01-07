#include<iostream>
using namespace std;
class Time
{
	//将数据成员改为私有
	int hour;
	int minute;
	int sec;
public:
	//在类内定义输入成员函数
	void inputTime() {
		cin >> hour >> minute >> sec;
	}
	//在类内定义输出成员函数
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.inputTime();
	t1.showTime();
	return 0;

}