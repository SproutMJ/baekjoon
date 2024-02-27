#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    const int lim = 2147483647/2;
    vector<vector<int>> v(n+1, vector<int>(n+1, lim));
    for(int i = 1; i<=n; i++){
        v[i][i] = 0;
    }

    vector<vector<int>> ans(n+1, vector<int>(n+1, 0));
    while(m--){
        int a, b, c;
        cin >> a >>b >>c;
        v[a][b] = c;
        ans[a][b] = b;
        v[b][a] = c;
        ans[b][a] = a;
    }

    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(v[i][j] > v[i][k] + v[k][j]){
                    v[i][j] = v[i][k] + v[k][j];
                    ans[i][j] = ans[i][k];
                }
            }
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == j){
                cout << '-';
            }else{
                cout << ans[i][j];
            }
            cout << " ";
        }
        cout << "\n";
    }
}