#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << sum << "\n";
    cout << sum * sum << "\n";
    cout << sum * sum << "\n";
}