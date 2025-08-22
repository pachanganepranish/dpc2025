#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    reverse(s.begin(), s.end());
    int n = s.size();
    int idx = 0;

    for (int i = 0; i < n; ) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        if (idx != 0) s[idx++] = ' ';
        int j = i;
        while (j < n && s[j] != ' ') j++;
        reverse(s.begin() + i, s.begin() + j);
        for (int k = i; k < j; k++)
            s[idx++] = s[k];
        i = j;
    }
    s.resize(idx);
    return s;
}

int main() {
    cout << '"' << reverseWords("the sky is blue") << '"' ;
}
