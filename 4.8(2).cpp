#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    int res = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        
        if (c >= '0' && c <= '9') {
            res = res * 16 + (c - '0');
        }
        
        else if (c >= 'A' && c <= 'F') {
            res = res * 16 + (c - 'A' + 10);
        }
    }
    return res;
}

int main() {
    cout << parseHex("A5") << endl; 
    return 0;
}