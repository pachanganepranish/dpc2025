#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; 
}

int main() {
    long long N = 123456, M = 789012;
    cout << lcm(N, M);
    return 0;
}
