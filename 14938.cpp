#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m ,r;
    cin >> n >>m>>r;

    vector<int> item(n+1);
    for(int i = 1; i<=n; i++){
        cin >> item[i];
    }

    const int lim = 2147483647/2;
    vector<vector<int>> v(n+1, vector<int>(n+1, lim));
    for(int i = 1; i<=n; i++){
        v[i][i] = 0;
    }

    while(r--){
        int a,b,c;
        cin >> a>>b >> c;
        v[a][b] = c;
        v[b][a] = c;
    }

    for(int k=1; k<=n; k++){
        for(int i = 1;i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(v[i][j] > v[i][k]+v[k][j]){
                    v[i][j] = v[i][k]+v[k][j];
                }
            }
        }
    }


    int ans = 0;
    for(int i = 1; i<=n; i++){
        int tmp = 0;
        for(int j = 1; j<=n; j++){
            if(v[i][j] <= m){
                tmp+=item[j];
            }
        }
        ans = max(ans, tmp);
    }

    cout << ans;
}