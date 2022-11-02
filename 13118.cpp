#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int human[4], x, y, r, ans = 0;

    for (int i = 0; i < 4; i++)
        cin >> human[i];

    cin >> x >> y >> r;

    for (int i = 0; i < 4; i++)
        if (human[i] == x)
            ans = i + 1;

    cout << ans;
}