#include <iostream>
using namespace std;

int main() {
    unsigned int n = 65534;
    cout << n << endl;           // 十进制
    cout << hex << n << endl;    // 十六进制
    cout << oct << n << endl;    // 八进制

    double d = 3.14;
    cout << (int)d << endl;      // 实数转整数

    return 0;
}