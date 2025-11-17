#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "请输入x的值: ";
    cin >> x;

    // 分段函数计算
    if (x > 0 && x < 1) {
        // 第一段：0 < x < 1
        y = 3 - 2 * x;
        cout << "使用第一段函数: y = 3 - 2x" << endl;
    }
    else if (x >= 1 && x < 5) {
        // 第二段：1 ≤ x < 5
        // 修正：应该是 2/(4x) + 1 还是 2/(4+x) + 1？
        // 根据常见形式，推断为 y = 2/(x+4) + 1
        y = 2.0 / (x + 4) + 1;
        cout << "使用第二段函数: y = 2/(x+4) + 1" << endl;
    }
    else if (x >= 5 && x < 10) {
        // 第三段：5 ≤ x < 10
        y = x * x;
        cout << "使用第三段函数: y = x²" << endl;
    }
    else {
        // x不在定义域内
        cout << "错误：x = " << x << " 不在函数定义域内" << endl;
        cout << "定义域：0 < x < 10" << endl;
        return 1;
    }

    cout << "当 x = " << x << " 时，y = " << y << endl;

    return 0;
}