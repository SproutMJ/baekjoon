#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            v[i][j] = (s[j] - '0');
            ans = max(v[i][j], ans);
        }
    }

    for (int i = 1; i<n; i++){
        for(int j = 1; j<m; j++){
            if(v[i][j] == 1){
                int len = v[i - 1][j - 1];
                for(int k = 1; k <= len; k++){
                    if(v[i][j-k] >= 1 && v[i-k][j]>=1){
                        v[i][j]++;
                    }else{
                        break;
                    }
                }
                ans = max(ans, v[i][j]);
            }
        }
    }

    cout << ans * ans;
}