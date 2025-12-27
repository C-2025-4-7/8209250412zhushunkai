#include<iostream>
using namespace std;

int* f()
{
    // 用new动态分配堆内存，函数结束后不会被释放
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}

int main()  // 修正main函数返回值类型
{
    int* p = f();
    cout << p[0] << endl;  
    cout << p[1] << endl;  
    delete[] p;  
    return 0;
}