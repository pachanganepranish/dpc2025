#include <iostream>
#include <string>
using namespace std;

string expandFromCenter(const string &s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    string longest = "";
    for (int i = 0; i < s.size(); i++) {
        string odd = expandFromCenter(s, i, i);
        string even = expandFromCenter(s, i, i + 1);
        string candidate = (odd.size() > even.size()) ? odd : even;
        if (candidate.size() > longest.size()) longest = candidate;
    }
    return longest;
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s);
    return 0;
}
