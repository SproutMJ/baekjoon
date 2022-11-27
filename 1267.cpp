#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n, i, cost[20], y = 0, m = 0;
    cin >> n;

    for (i = 0; i < n; i++) {
        int cost;
        cin >> cost;
        y += cost / 30 + 1;
        m += cost / 60 + 1;
    }

    y *= 10;
    m *= 15;
    if (y == m)
        cout << "Y M " << y;
    else if (y > m)
        cout << "M " << m;
    else
        cout << "Y " << y;
}