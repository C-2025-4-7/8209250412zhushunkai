#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void input() {
		cout << "请输入长方柱的长，宽，高:";
		cin >> length >> width >> height;
	}
	double getVolume() {
		return length * width * height;
	}
	void output() {
		cout << "体积=" << getVolume() << endl;
	}
};
int main() {
	Cuboid c1, c2, c3;
	
	cout << "第一个长方柱：" << endl;
	c1.input();
	cout << "第二个长方柱：" << endl;
	c2.input();
	cout << "第三个长方柱：" << endl;
	c3.input();
	cout << "\n计算结果:" << endl;
	cout << "第一个长方柱：" << endl;
	c1.output();
	cout << "第二个长方柱：" << endl;
	c2.output();
	cout << "第三个长方柱：" << endl;
	c3.output();
	return 0;
	
}