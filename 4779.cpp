#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

void f(int n) {
    if (n == 0) {
        cout << "-";
        return;
    }
    f(n - 1);
    for (int i = 0; i < pow(3, n - 1); i++) {
        cout << " ";
    }
    f(n - 1);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    while (cin >> n) {
        f(n);
        cout << "\n";
    }
}