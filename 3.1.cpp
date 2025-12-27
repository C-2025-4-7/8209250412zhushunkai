#include <iostream>
using namespace std;

void gcd_lcm(int m, int n, int& g, int& l) {
    int a = m, b = n;
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    g = a;
    l = m * n / g;
}

int main() {
    int m, n, g, l;
    cin >> m >> n;
    gcd_lcm(m, n, g, l);
    cout << "最大公约数：" << g << endl << "最小公倍数：" << l;
    return 0;
}