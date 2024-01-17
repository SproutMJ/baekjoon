#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int uset[1001][2];

int find(int a){
    if (uset[a][0] == a) {
        return a;
    }
    return uset[a][0] =  find(uset[a][0]);
}

bool same(int a, int b){
    return find(a) == find(b);
}

void unite(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        if(uset[a][1] < uset[b][1]){
            uset[b][1] += uset[a][1];
            uset[a][0] = b;
        }else{
            uset[a][1]+=uset[b][1];
            uset[b][0] = a;
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        uset[i][0] = i;
        uset[i][1] = 1;
    }

    vector<vector<int>> vertex(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> vertex[i][j];
        }
    }

    vector<tuple<int,int, int>> edge;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            edge.push_back({vertex[i][j], i, j});
        }
    }

    sort(edge.begin(), edge.end());

    unsigned long long ans = 0;
    for (const auto &e: edge) {
        auto [c, a, b] = e;
        if (!same(a, b)) {
            unite(a, b);
            ans+=c;
        }
    }

    cout << ans;
}