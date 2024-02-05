#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, t, g;
    cin >> n >> t >> g;

    queue<pair<int, int>> q;
    vector<int> dis(99999+1, 987654321);
    dis[n] = 0;
    q.push({n, 0});
    while(!q.empty()){
        auto [pos, d] = q.front();
        q.pop();

        if(pos*2<=99999){
            if(d<t){
                string s = to_string(pos*2);
                int first = s[0] - '0';
                first = max(0, first - 1);
                s[0] = first + '0';
                int nxt = stoi(s);
                if(d + 1 < dis[nxt]){
                    dis[nxt] = d+1;
                    q.push({nxt, d+1});
                }
            }
        }
        if(pos+1<=99999){
            if(d<t){
                int nxt = pos+1;
                if(d + 1 < dis[nxt]){
                    dis[nxt] = d+1;
                    q.push({nxt, d+1});
                }
            }
        }
    }

    if(dis[g] <= t){
        cout << dis[g];
    }else{
        cout << "ANG";
    }
}