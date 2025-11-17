#include <iostream>
using namespace std;

int main() {
    int a = 2, sum = 0, days = 0;

    while (sum + a <= 100) {
        sum += a;
        a *= 2;
        days++;
    }

    double avg = sum * 0.8 / days;
    cout << avg;
    return 0;
}