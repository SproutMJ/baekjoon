#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string a, b;
    cin >> a >> b;

    int ans = 0;
    vector<vector<int>> v(4000, vector<int>(4000, 0));
    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<b.size(); j++){
            if(a[i] == b[j]){
                v[i][j] = 1;
                if(i>=1 && j>=1){
                    v[i][j]+=v[i-1][j-1];
                }
                ans = max(ans, v[i][j]);
            }
        }
    }

    cout << ans;
}