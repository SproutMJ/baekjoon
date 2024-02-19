#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, t;
    cin >> n>> m >> t;
    vector<vector<int>> v(n, vector<int>(m));
    for(auto &i: v){
        for(auto &j: i){
            cin >> j;
        }
    }

    queue<tuple< int, int, int>> q;
    q.push({0, 0, 0});
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vis[0][0] = false;
    pair<int, int> gram = {-1, -1};
    int gramcut = -1;
    int cut = 987654321;
    while(!q.empty()){
        auto [r, c, cnt] = q.front();
        q.pop();

        if(make_pair(r, c) == make_pair(n - 1, m - 1)){
            cut = cnt;
            break;
        }

        pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for(const auto &d: diff){
            int rr = r+d.first;
            int cc = c+d.second;

            if(rr<0||rr>=n||cc<0||cc>=m) {
                continue;
            }

            if(vis[rr][cc]){
                continue;
            }

            if(v[rr][cc] == 0){
                q.push({rr, cc, cnt+1});
            }
            if(v[rr][cc] == 2){
                gram = {rr, cc};
                gramcut = cnt + 1;
                q.push({rr, cc, cnt+1});
            }
            vis[rr][cc] = true;
        }
    }

    if(gramcut != -1)
        cut = min(cut, gramcut+abs(gram.first-(n - 1)) + abs(gram.second-(m - 1)));
    if(cut<=t){
        cout << cut;
    }else{
        cout << "Fail";
    }
}