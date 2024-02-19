#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> buha[100000+1];
vector<int> ans(100000+1, 0);
void dfs(int man, int cost){
    if(buha[man].size() == 0){
        ans[man] +=cost;
        return;
    }

    for(const auto &nxt: buha[man]){
        dfs(nxt, cost + ans[man]);
    }
    ans[man]+=cost;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int tmp;
    cin >> tmp;
    for(int i = 2; i<=n; i++){
        int parent;
        cin >> parent;
        buha[parent].push_back(i);
    }
    while(m--){
        int man, cost;
        cin >> man >> cost;
        ans[man]+=cost;
    }

    dfs(1, 0);


    for(int i = 1; i<=n; i++){
        cout << ans[i] << " ";
    }
}