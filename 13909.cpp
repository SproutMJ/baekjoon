#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    unsigned long long n;
    cin >> n;
    int ans = 0;
    for (unsigned long long i = 1; i * i <= n; i++) {
        ++ans;
    }

    cout << ans;
}