#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        unsigned long long x, y, xx, yy;
        cin >> x >> y >> xx >> yy;
        if (x * y == xx * yy)cout << "Tie\n";
        else if (x * y > xx * yy)cout << "TelecomParisTech\n";
        else cout << "Eurecom\n";
    }
}