#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    map<pair<bool, int>, int> stud;
    int n;
    double m;
    cin >> n >> m;
    while (n--) {
        int a, b;
        cin >> a >> b;

        if (stud.count({a, b}) == 0) {
            stud[{a, b}] = 1;
        }else {
            stud[{a, b}]++;
        }
    }

    int ans = 0;
    for (const auto &s: stud) {
        ans += ceil(s.second / m);
    }

    cout << ans;
}