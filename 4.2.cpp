#include<iostream>
using namespace std;
void bubbleSort(double a[], int s)
{
	bool c;
	do {
		c = false;
		for(int j=0;j<s-1;j++)
			if (a[j] > a[j + 1]) {
				swap(a[j] ,a[j + 1]);
				c = true;
			}
	} while (c);
}
int main() {
	double a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	bubbleSort(a, 10);
	for (double x : a)
		cout << x << "";
	return 0;

}