#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, k, a;
    cin >> x >> k >> a;

    bool ans = k > (x % (k + a));
    cout << ans;
}