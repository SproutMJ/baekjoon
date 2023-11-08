#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    vector<bool> prime(1000001, true);
    prime[0] = prime[1] = false;

    int n;
    cin >> n;
    for (int i = 2; i * i <= 1000000; ++i) {
        if (prime[i]) {
            for (int j = 2; i * j <= 1000000; ++j) {
                prime[i * j] = false;
            }
        }
    }

    while (n--) {
        int a;
        cin >> a;

        int ans = 0;
        for (int i = 2; i <= a / 2; i++) {
            if(prime[i] && prime[a-i])
                ++ans;
        }

        cout << ans << "\n";
    }
}