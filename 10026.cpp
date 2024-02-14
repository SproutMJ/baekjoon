#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for(auto &i: v){
        cin >> i;
    }

    vector<vector<bool>> vis(n, vector<bool>(n, false));
    queue<tuple<int, int, char>> q;
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(vis[i][j]) {
                continue;
            }

            ans1++;
            q.push({i, j, v[i][j]});
            vis[i][j] = true;

            while(!q.empty()){
                auto[r, c, ch] = q.front();
                q.pop();

                pair<int, int> diff[4] = {{0,1}, {0,-1}, {1,0},{-1,0}};
                for(const auto &d: diff){
                    int rr = r+d.first;
                    int cc = c+d.second;

                    if(rr<0||rr>=n||cc<0||cc>=n||vis[rr][cc]||ch!=v[rr][cc])
                        continue;

                    vis[rr][cc] = true;
                    q.push({rr, cc, ch});
                }
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[i][j] == 'R')
                v[i][j] = 'G';
        }
    }

    fill(vis.begin(), vis.end(), vector<bool>(n, false));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(vis[i][j]) {
                continue;
            }

            ans2++;
            q.push({i, j, v[i][j]});
            vis[i][j] = true;

            while(!q.empty()){
                auto[r, c, ch] = q.front();
                q.pop();

                pair<int, int> diff[4] = {{0,1}, {0,-1}, {1,0},{-1,0}};
                for(const auto &d: diff){
                    int rr = r+d.first;
                    int cc = c+d.second;

                    if(rr<0||rr>=n||cc<0||cc>=n||vis[rr][cc]||ch!=v[rr][cc])
                        continue;

                    vis[rr][cc] = true;
                    q.push({rr, cc, ch});
                }
            }
        }
    }

    cout << ans1 << " " << ans2;
}