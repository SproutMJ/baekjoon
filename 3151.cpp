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
    vector<vector<int>> bod(n+1, vector<int>(n+1, lim));
    for(int i = 1; i<=n; i++){
        bod[i][i] = 0;
    }

    while(m--){
        int a, b;
        cin >> a >>b;
        bod[a][b] = 1;
        bod[b][a] = 1;
    }

    for(int k= 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(bod[i][j] > bod[i][k] + bod[k][j]){
                    bod[i][j] = bod[i][k] + bod[k][j];
                }
            }
        }
    }

    pair<int, int> ans;
    int flag = 987654321;
    for(int i = 1; i<=n; i++){
        for(int j = i+1; j<=n; j++){
            int tmp = 0;
            for(int k = 1; k<=n; k++){
                tmp+=min(bod[i][k], bod[j][k])*2;
            }
            if(tmp<flag){
                flag = tmp;
                ans = {i, j};
            }
        }
    }

    cout << ans.first << " " << ans.second << " " << flag;
}