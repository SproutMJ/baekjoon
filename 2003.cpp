#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;
    vector<int> v(n);
    for(auto &i :v){
        cin >> i;
    }

    int sum = v[0];
    int i = 0, j = 0, ans = 0;
    while (j<n) {
        if (sum < m) {
            j++;
            sum+=v[j];
            continue;
        }
        if(sum == m){
            sum-=v[i];
            i++;
            ans++;
            continue;
        }
        sum-=v[i];
        i++;
    }

    cout << ans;
}