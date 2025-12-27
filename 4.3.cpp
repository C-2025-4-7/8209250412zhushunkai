#include <iostream>
using namespace std;

int main() {
    bool locker[101] = { false };  

    for (int s = 1; s <= 100; s++) {
        for (int l = s; l <= 100; l += s) {
            locker[l] = !locker[l];  
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (locker[i]) cout << i << " ";
    }
    return 0;
}