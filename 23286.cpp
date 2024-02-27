#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m ,t;
    cin >> n >>m >> t;

    const int lim = 2147483647/2;
    vector<vector<int>> v(n+1, vector<int>(n+1, lim));

    while(m--){
        int a, b ,c;
        cin >> a >>b >>c;
        v[a][b] = c;
    }
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(v[i][k] != lim && v[k][j] != lim){
                    v[i][j] = min(v[i][j], max(v[i][k], v[k][j]));
                }
            }
        }
    }

    while(t--){
        int a, b;
        cin >> a >>b;

        if(v[a][b] == lim){
            cout << -1;
        }else{
            cout << v[a][b];
        }
        cout << "\n";
    }
}