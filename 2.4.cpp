#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "请输入运算表达式（格式：数字 运算符 数字）：";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;

    case '%':
        if (num2 == 0) {
            cout << "错误：取模运算的除数不能为0！" << endl;
        }
        else if (num1 != (int)num1 || num2 != (int)num2) {
            cout << "错误：取模运算要求操作数为整数！" << endl;
        }
        else {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;

    default:
        cout << "错误：不支持的运算符 '" << op << "'" << endl;
        cout << "支持的运算符：+ - * / %" << endl;
        break;
    }

    return 0;
}