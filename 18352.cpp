#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, k, x;
    cin >> n >> m >> k >>x;

    vector<vector<int>> board(n+1, vector<int>());
    while (m--) {
        int a,b;
        cin >> a>>b;
        board[a].push_back((b));
    }

//    vector<int> dist(n + 1, numeric_limits<int>::max());
//    vector<bool> vis(n + 1, false);
//    dist[x] = 0;
//
//    for(int i = 0; i<n-1; i++){
//        int mindist = numeric_limits<int>::max(), minvertex;
//        for (int j = 1; j <= n; j++) {
//            if(vis[j] == false && dist[j]<=mindist){
//                minvertex = j;
//                mindist = dist[j];
//            }
//        }
//
//        vis[minvertex] = true;
//
//        for(int j = 1; j<=n; j++){
//            if(vis[j] == false &&dist[minvertex] != numeric_limits<int>::max() && board.count({minvertex, j}) !=0
//            && dist[minvertex] + board[{minvertex, j}] < dist[j]){
//                dist[j] = dist[minvertex] + board[{minvertex, j}];
//            }
//        }
//    }

    queue<pair<int, int>> q;
    vector<int> visited(n + 1, false), dist;
    q.push({x, 0});
    visited[x] = true;
    while (!q.empty()) {
        auto now = q.front();
        q.pop();

        for (const auto &i: board[now.first]) {
            if(visited[i] == false){
                if (now.second + 1 == k) {
                    dist.push_back(i);
                }
                q.push({i, now.second + 1});
                visited[i] = true;
            }
        }
    }


    if(dist.size() == 0){
        cout << -1;
    }else{
        sort(dist.begin(), dist.end());
        for_each(dist.begin(), dist.end(), [](int &val)->void{
            cout << val << "\n";
        });
    }
}
