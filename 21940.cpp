#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n>>m;

    const int lim = 2147483647/2;
    vector<vector<int>> v(n+1, vector<int>(n+1, lim));
    for(int i = 1; i<=n; i++){
        v[i][i] = 1;
    }

    while(m--){
        int a, b, c;
        cin >> a>>b>>c;
        v[a][b] = c;
    }

    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(v[i][j] > v[i][k] + v[k][j]){
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }

    int k;
    cin >> k;
    vector<int> fren(k);
    for(auto &i : fren){
        cin >> i;
    }

    int wang = 987654321;
    vector<int> pos;
    for(int i = 1; i<=n; i++){
        int tmp = 0;
        for(const auto &f: fren){
            tmp = max(tmp, (v[i][f] + v[f][i]));
        }

        if(wang > tmp){
            wang = tmp;
            pos.clear();
            pos.push_back(i);
        }else if(wang == tmp){
            pos.push_back(i);
        }
    }

    for(const auto &i: pos){
        cout << i << " ";
    }
}