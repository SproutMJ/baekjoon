#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while (1) {
        int n;
        cin >> n;
        if (!n)break;

        if (n > 5000000)cout << n - n / 100 * 20;
        else if (n > 1000000)cout << n - n / 100 * 10;
        else cout << n;
        cout << "\n";
    }
}