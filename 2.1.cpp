#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "请输入一个字符: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        // 如果是小写字母，转换为大写
        char upper = ch - 32;
        cout << "转换为大写: " << upper << endl;
    }
    else {
        // 否则输出其后继字符的ASCII码值
        int next_ascii = ch + 1;
        cout << "后继字符的ASCII码值: " << next_ascii << endl;
    }

    return 0;
}