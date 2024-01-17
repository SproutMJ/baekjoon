#include <iostream>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    int ans = 1;
    int i = 0, j = 1;
    map<int, int> mp;
    mp[v[i]] = 1;
    while (true) {
        int tmp = j - i;
        while(j < n && (mp.find(v[j]) == mp.end() || mp[v[j]] < k)){
            if(mp.find(v[j]) == mp.end()){
                mp[v[j]] = 1;
            }else{
                mp[v[j]]++;
            }
            j++;
            tmp++;
        }
        ans = max(ans, tmp);

        if (j == n) {
            break;
        }

        while (mp[v[j]] == k) {
            mp[v[i]]--;
            i++;
        }
    }

    cout << ans;
}