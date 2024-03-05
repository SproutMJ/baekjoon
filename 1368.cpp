#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int non[301];
int find(int n){
    if(n == non[n]) {
        return n;
    }
    return non[n] = find(non[n]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        non[a] = b;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<tuple<int, int, int>> adj;
    int n;
    cin >> n;
    for(int i = 0; i<=n; i++){
        non[i] = i;
    }
    for(int i = 1; i<=n; i++){
        int tmp;
         cin >> tmp;
         adj.push_back({tmp, 0, i});
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int tmp;
            cin >> tmp;
            if(i == j){
                continue;
            }

            adj.push_back({tmp, i, j});
        }
    }

    sort(adj.begin(), adj.end());

    int ans = 0;
    for(const auto &[cost, i, j]: adj){
        if(find(i) != find(j)){
            uni(i, j);
            ans+=cost;
        }
    }

    cout << ans;
}