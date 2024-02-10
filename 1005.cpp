#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> time(n+1);
        for(int i = 1; i<=n; i++){
            cin >> time[i];
        }

        vector<vector<int>> edge(n+1, vector<int>());
        vector<int> ind(n+1, 0);
        while(k--){
            int a, b;
            cin >> a >>b;

            edge[a].push_back(b);
            ind[b]++;
        }

        queue<int> q;
        vector<int> ans(n+1, 0);
        for(int i = 1; i<=n; i++){
            if(ind[i] == 0){
                q.push(i);
                ans[i] = time[i];
            }
        }

        for(int i = 0; i<n; i++){
            int now = q.front();
            q.pop();

            for(const auto &e: edge[now]){
                ans[e] = max(ans[e], ans[now] + time[e]);
                ind[e]--;
                if(ind[e] == 0){
                    q.push(e);
                }
            }
        }

        int w;
        cin >> w;
        cout << ans[w] << "\n";
    }
}