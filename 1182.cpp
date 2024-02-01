#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int n, s;
int ans = 0;
vector<int> v;
void dfs(int i, int sum){
    if(i == n){
        if(sum == s){
            ans++;
        }
        return;
    }
    dfs(i+1, sum+v[i]);
    dfs(i+1, sum);
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> s;

    v.resize(n);
    for(auto &i: v){
        cin >> i;
    }

    dfs(0, 0);
    if(s == 0){
        ans--;
    }
    cout << ans;
}