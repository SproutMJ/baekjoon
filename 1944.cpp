#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;
string bod[50];
pii ubod[50][50];

pii find(pii a){
    if(a == ubod[a.first][a.second]){
        return a;
    }
    return ubod[a.first][a.second] = find(ubod[a.first][a.second]);
}

void uni(pii a, pii b){
    a = find(a);
    b = find(b);

    if(a!=b){
        ubod[a.first][a.second] = b;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;
    for(int i = 0; i<n; i++){
        cin >> bod[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            ubod[i][j] = {i, j};
        }
    }

    vector<pii> key;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(bod[i][j] == 'K' || bod[i][j] == 'S'){
                key.push_back({i, j});
            }
        }
    }

    vector<tuple<int, pii, pii>> edge;
    for(const auto &k: key){
        bool vis[50][50];
        fill(&vis[0][0], &vis[0][0]+50*50, false);
        vis[k.first][k.second] = true;
        queue<pair<pii, int>> q;
        q.push({k, 0});
        while(!q.empty()){
            auto [pos, cnt] = q.front();
            q.pop();

            pii diff[4] = {{-1, 0}, {1, 0}, {0, -1}, {0,1}};
            for(const auto &d: diff){
                auto [rr, cc] = d;
                rr+=pos.first;
                cc+=pos.second;

                if(rr<0||rr>=n||cc<0||cc>=n || vis[rr][cc] || bod[rr][cc] == '1'){
                    continue;
                }

                vis[rr][cc] = true;
                q.push({{rr, cc}, cnt+1});
                if((bod[rr][cc] == 'K'||bod[rr][cc] == 'S')){
                    edge.push_back({cnt+1, k, {rr, cc}});
                }
            }
        }
    }

    sort(edge.begin(), edge.end());

    int ans = 0;
    for(const auto &e: edge){
        auto [cost, a, b] = e;
        if(find(a) != find(b)){
            uni(a, b);
            ans+=cost;
        }
    }

    pii first = find(key.front());
    bool flag = true;
    for(const auto &k : key){
        if(first != find(k)){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << ans;
    }else{
        cout << -1;
    }
}
