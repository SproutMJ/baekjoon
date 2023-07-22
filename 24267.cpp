#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    long long sum = 0;
    for(long long i = 1; i <= n - 2; i++) {
        sum += i * (i + 1) / 2;
    }

    cout << sum << "\n" << 3;
}