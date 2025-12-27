#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 > len2 || len1 == 0) return -1;

    for (int i = 0; i <= len2 - len1; i++) {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) j++;
        if (j == len1) return i;
    }
    return -1;
}

int main() {
    char s1[80], s2[80];
    cin >> s1 >> s2;
    int pos = indexOf(s1, s2);
    if (pos != -1) cout << pos << endl;
    else cout << -1 << endl;
    return 0;
}