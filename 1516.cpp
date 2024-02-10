#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<vector<int>> edge(n+1, vector<int>());
    vector<int> ind(1+n, 0);
    vector<int> time(n+1);
    for(int i = 1; i<=n; i++){
        cin >> time[i];

        while(true){
            int out;
            cin >> out;
            if(out == -1){
                break;
            }

            ind[i]++;
            edge[out].push_back(i);
        }
    }

    vector<int> ans(n+1, 0);
    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(ind[i] == 0){
            q.push(i);
            ans[i] = time[i];
        }
    }

    for(int i = 1; i<=n; i++){
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

    for(int i = 1; i<=n; i++){
        cout << ans[i] << "\n";
    }
}