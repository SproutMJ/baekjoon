#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int x, xx, y, yy;
    int a, aa, b, bb;

    cin >> x >> y >> xx >> yy;
    cin >> a >> b >> aa >> bb;

    int ans1 = max(aa, xx) - min(a, x);
    int ans2 = max(bb, yy) - min(b, y);

    int ans = max(ans1, ans2);

    cout << ans * ans;
}
