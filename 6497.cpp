#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> bod;

int find(int n){
    if(bod[n] == n){
        return n;
    }

    return bod[n] = find(bod[n]);
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

    while(true){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        bod.resize(n);
        for(int i = 0; i<n; i++){
            bod[i] = i;
        }

        vector<tuple<int, int, int>> edge;
        while(m--){
            int a, b, c;
            cin >> a >>b >>c;
            edge.push_back({c, a, b});
        }

        sort(edge.begin(), edge.end());
        int sum = 0, ans = 0;
        for(const auto &e: edge){
            auto [c, a, b] = e;
            sum+=c;
            if(find(a) != find(b)){
                uni(a, b);
                ans+=c;
            }
        }

        cout << sum-ans << "\n";
    }
}