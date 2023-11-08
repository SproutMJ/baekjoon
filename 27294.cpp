#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int t, s;
    cin >> t >>s;

    if (s == 1 || !(12 <= t && t <= 16)) {
        cout << 280;
    }
    else {
        cout << 320;
    }
}