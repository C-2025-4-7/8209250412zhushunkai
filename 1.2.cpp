#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    double r, h;
    cin >> r >> h;
    double v = PI * r * r * h / 3;
    cout << v;
    return 0;
}