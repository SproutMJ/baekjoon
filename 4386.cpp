#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> bod(100);
pair<double, double> pos[100];

int find(int a){
    if(a == bod[a]) return a;
    return bod[a] = find(bod[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        bod[a] = b;
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        bod[i] = i;
        double r, c;
        cin >> r >>c;
        pos[i] = {r, c};
    }

    vector<tuple<double, int, int>> edge;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            auto [r, c] = pos[i];
            auto [rr, cc] = pos[j];
            double diff = sqrt(abs(r-rr)*abs(r-rr)+abs(c-cc)*abs(c-cc));
            edge.push_back({diff, i, j});
        }
    }

    sort(edge.begin(), edge.end());

    double ans = 0;
    for(const auto &e: edge){
        auto [diff, a, b] = e;
        if(find(a) != find(b)){
            uni(a, b);
            ans+=diff;
        }
    }

    cout << ans;
}