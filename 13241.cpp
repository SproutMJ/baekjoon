#include <iostream>
#include <queue>
#include <algorithm>

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    if (b == 0) return a;
    return lcm(b, a % b);
}

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long long a, b;
    cin >> a >> b;
    cout << a * b / lcm(a, b);
}