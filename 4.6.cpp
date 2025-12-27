#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26] = { 0 };  
    cin.getline(s, 100);   

    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << (char)('a' + i) << ": " << counts[i] << endl;
        }
    }
    return 0;
}