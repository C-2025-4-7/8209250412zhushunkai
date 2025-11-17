#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;

    double x = a;
    while (1) {
        double next = 0.5 * (x + a / x);
        if (next > x ? next - x < 1e-5 : x - next < 1e-5) break;
        x = next;
    }

    cout << x;
    return 0;
}