#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pii> v(n+2);
        for(auto &i :v){
            cin >> i.first >> i.second;
        }

        queue<int> q;
        vector<bool> vis(n+2, false);
        q.push(0);
        vis[0] = true;
        bool flag = false;
        while(!q.empty()){
            int now = q.front();
            auto [r, c] = v[now];
            if(r == v.back().first && c == v.back().second){
                flag = true;
            }
            q.pop();

            for(int i = 1; i < n+2; i++){
                if(abs(r - v[i].first) + abs(c-v[i].second) <= 1000 && vis[i] == false){
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
        if(flag){
            cout << "happy";
        }else{
            cout << "sad";
        }
        cout << "\n";
    }
}