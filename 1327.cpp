#include <iostream>
#include <queue>
#include <algorithm>
#include<set>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    string s;
    for(int i = 0; i<n; i++){
        char ch;
        cin >> ch;
        s+=ch;
    }

    set<string> vis;
    queue<pair<string, int>> q;
    string dest = s;
    sort(dest.begin(), dest.end());

    q.push({s, 0});
    while(!q.empty()){
        auto [now, cnt] = q.front();
        q.pop();
        if(now == dest){
            cout << cnt;
            return 0;
        }

        for(int i = 0; i<=now.length()-k; i++){
            string copy = now;
            reverse(copy.begin() + i, copy.begin() + i + k);

            if(vis.count(copy) == 0){
                vis.insert(copy);
                q.push({copy, cnt+1});
            }
        }
    }

    cout << -1;
}