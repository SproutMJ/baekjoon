#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s;
    int k;
    cin >> s >> k;

    int ans = -1;
    queue<pair<string, int>> q;
    q.push({s, 0});
    set<pair<string, int>> vis;
    vis.insert({s, 0});
    int m = s.length();
    while(!q.empty()){
        auto[now, cnt] = q.front();
        q.pop();

        for(int i = 0; i<m; i++){
            for(int j = i+1; j<m; j++){
                string copy = now;
                char tmp = copy[i];
                copy[i] = copy[j];
                copy[j] = tmp;
                if(copy[0] == '0'){
                    continue;
                }
                if(cnt+1 == k){
                    ans = max(ans, stoi(copy));
                    continue;
                }
                if(vis.count({copy, cnt+1}) == 0){
                    vis.insert({copy, cnt+1});
                    q.push({copy, cnt+1});
                }
            }
        }
    }

    cout << ans;
}