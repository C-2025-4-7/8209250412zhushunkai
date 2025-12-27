// 必须包含输入输出流头文件
#include <iostream>
using namespace std;

// C++标准中main函数返回值应为int
int main()
{
    int i, j, * pi, * pj;
    pi = &i;
    pj = &j;
    i = 5;
    j = 7;
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;

    return 0;
}