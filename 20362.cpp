#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    string s;

    cin >> n >>s;

    vector<pair<string, string>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;

    int flag = false, ans = 0;
    string answer;
    for (int i = n-1; i>=0; i--){
        if(v[i].first == s){
            answer = v[i].second;
            flag = true;
            continue;
        }
        if(flag&&v[i].second==answer)ans++;
    }

    cout << ans;
}