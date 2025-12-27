#include<iostream>
using namespace std;
int main() {
	int a[10], num, cnt=0;
	for (int i = 0; i < 10;i ++) {
		cin >> num;
		bool flag = true;
		for (int j = 0; j < cnt; j++)
			if (a[j] = num)
				flag = false;
		if (flag)a[cnt++] = num;
		for (int i = 0; i < cnt; i++)
			cout << a[i] << "";
		return 0;

	}

}