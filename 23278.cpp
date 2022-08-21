#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(10);

    int n, l, h;
    cin >>n>>l>>h;
    vector<double> v(n);
    for (auto &i : v)cin >> i;
    sort(v.begin(), v.end());
    double ans = accumulate(v.begin()+l, v.end()-h, 0.0);
    cout << ans/(n-l-h);
}