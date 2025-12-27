#include <iostream>
using namespace std;

// 冒泡排序：数组从小到大排序
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换两个元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "输入数组元素个数: ";
    cin >> n;

    int* arr = new int[n];

    cout << "输入" << n << "个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(arr, n);

    cout << "排序后数组: ";
    int* p = arr; 
    for (int i = 0; i < n; i++) {
        cout << *p << " ";
        p++; 
    }

    delete[] arr;
    arr = nullptr; 
    return 0;
}