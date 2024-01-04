#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long long a, b;
    cin >> a >> b;
    if (b < a) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    if (b - a <= 1) {
        cout << 0;
        return 0;
    }
    cout << b - a - 1 << endl;
    for (unsigned long long i = a + 1; i < b; i++) {
        cout << i << " ";
    }
    return 0;
}