#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<vector<int>> v(n+1, vector<int>(2));
    vector<int> adj[200001];
    for(int i = 1; i<=n; i++){
        cin >> v[i][0] >> v[i][1];
        adj[i].push_back(v[i][0]);
        adj[i].push_back(v[i][1]);
    }

    vector<int> presen(n+1, 0);
    for(int i = 1; i<=n; i++){
        presen[v[i][0]]++;
        presen[v[i][1]]++;
    }

    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(presen[i] <2 ){
            q.push(i);
        }
    }

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(const auto &nxt:adj[now]){
            presen[nxt]--;
            if(presen[nxt]<2){
                q.push(nxt);
            }
        }
    }

    int ans = 0;
    for(int i = 1;i<=n; i++){
        if(presen[i]==2){
            ans++;
        }
    }
    if(ans == 0){
        cout << 0;
    }else{
        cout << ans << "\n";
        for(int i = 1; i<=n; i++){
            if(presen[i]==2)
                cout << i << " ";
        }
    }
}