#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int lcm(int a, int b){
    if(b == 0)return a;
    return lcm(b, a % b);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    int l = v[1] - v[0];
    vector<int> dis(n - 1);
    for (int i = 0; i < n-1; i++) {
        dis[i] = v[i + 1] - v[i];
        l = lcm(l, dis[i]);
    }

    int ans = 0;
    for (const auto &i: dis) {
        ans += (i / l - 1);
    }

    cout << ans;
}