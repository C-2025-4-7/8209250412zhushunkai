#include <iostream>
using namespace std;

void f(char* st, int i)
{
    st[i] = '\0';  // 修正为英文单引号
    cout << st << endl;
    if (i > 1) f(st, i - 1);  // 递归调用，i>1时继续
}

int main()  // C++标准main函数为int类型
{
    char st[] = "abcd";  // 修正为英文双引号
    f(st, 3);  // 数组下标从0开始，"abcd"的最后一个有效下标是3
    return 0;
}