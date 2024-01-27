#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i:v){
        cin >> i;
    }

    if(n == 1){
        cout << 0;
        return 0;
    }

    const int limit = 987654321;
    vector<int> vis(n, limit);
    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        auto now = q.front();
        int pos = now.first;
        int cnt = now.second;
        q.pop();

        if(cnt<vis[pos]){
            vis[pos] = cnt;
            for(int i = 1; i<=v[pos]; i++){
                if(pos + i >= n-1){
                    cout << cnt + 1;
                    return 0;
                }
                q.push({pos + i, cnt + 1});
            }
        }
    }

    cout << -1;
}