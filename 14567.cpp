#include <iostream>
#include <queue>
#include<algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1, vector<int>());
    vector<int> inde(n + 1, 0);
    vector<int> ans(n + 1, 1);

    while(m--){
        int a, b;
        cin >> a >>b;

        v[a].push_back(b);
        inde[b]++;
    }

    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(inde[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(const auto &i : v[now]){
            inde[i]--;
            if(inde[i] == 0){
                q.push(i);
                ans[i] = max(ans[i], ans[now] + 1);
            }
        }
    }

    for(int i = 1; i<=n; i++){
        cout << ans[i] << " ";
    }
}