#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "第一条边: ";
    cin >> a;
    cout << "第二条边: ";
    cin >> b;
    cout << "第三条边: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        float perimeter = a + b + c;
        cout << "周长: " << perimeter << endl;

        if (a == b || a == c || b == c) {
            cout << "这是等腰三角形" << endl;
        }
        else {
            cout << "这不是等腰三角形" << endl;
        }
    }
    else {
        cout << "这三条边不能构成三角形" << endl;
    }

    return 0;
}