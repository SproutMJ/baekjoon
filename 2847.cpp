#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    int ans = 0;
    for(int i = n-2; i>=0; i--){
        if (v[i] >= v[i + 1]) {
            ans += (v[i] - (v[i + 1] - 1));
            v[i] = (v[i+1]-1);
        }
    }

    cout << ans;
}