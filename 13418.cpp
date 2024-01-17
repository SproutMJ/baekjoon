#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int uset[1001][2];

int find(int a){
    if(uset[a][0] == a)return a;
    return uset[a][0] = find(uset[a][0]);
}

bool same(int a, int b){
    return find(a) == find(b);
}

void unite(int a, int b){
    a = find(a);
    b = find(b);
    if(a!= b) {
        if(uset[a][1]<uset[b][1]){
            uset[b][1]+=uset[a][1];
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

    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++) {
        uset[i][0] = i;
        uset[i][1] = 1;
    }

    m++;
    vector<tuple<int, int, int>> edge;
    while (m--) {
        int c, a, b;
        cin >>a>>b >>c;
        edge.push_back({!c, b, a});
    }

    sort(edge.begin(), edge.end());
    int min = 0;
    for(const auto &e: edge){
        auto [c, a, b] = e;
        if(!same(a, b)){
            unite(a, b);
            min+=c;
        }
    }

    for (int i = 0; i <= n; i++) {
        uset[i][0] = i;
        uset[i][1] = 1;
    }
    int max = 0;
    for(int i = edge.size() - 1; i>=0; i--){
        auto [c, a, b] = edge[i];
        if(!same(a, b)){
            unite(a, b);
            max+=c;
        }
    }

    cout << max*max - min*min;
}