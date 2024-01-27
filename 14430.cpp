#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m)), ans(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> v[i][j];
        }
    }

    ans[0][0] = v[0][0];
    for(int i=1; i<n; i++){
        ans[i][0] = ans[i-1][0] + v[i][0];
    }
    for(int i=1; i<m; i++){
        ans[0][i] = ans[0][i-1] + v[0][i];
    }

    for(int i=1; i<n; i++){
        for(int j = 1; j<m; j++){
            ans[i][j] = max(ans[i - 1][j], ans[i][j-1]) + v[i][j];
        }
    }

    cout << ans[n-1][m-1];
}