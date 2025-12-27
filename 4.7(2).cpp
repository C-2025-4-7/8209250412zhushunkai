// 必须包含标准输入输出头文件
#include <stdio.h>

int main()
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;  // 数组名a代表首元素地址，直接赋值给指针p
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
    return 0;
}