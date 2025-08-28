#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int atMostK(const string &s, int k) {
    if (k == 0) return 0;
    unordered_map<char, int> freq;
    int left = 0, count = 0;
    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;
        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}

int substringsWithKDistinct(string s, int k) {
    return atMostK(s, k) - atMostK(s, k - 1);
}

int main() {
    string s = "pqpqs";
    int k = 2;
    cout << substringsWithKDistinct(s, k);
    return 0;
}
