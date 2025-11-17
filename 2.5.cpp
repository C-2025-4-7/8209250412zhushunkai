#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符: ";
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
        else
            others++;
    }

    cout << "字母:" << letters << " 空格:" << spaces
        << " 数字:" << digits << " 其他:" << others << endl;

    return 0;
}