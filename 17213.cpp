#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int ans = 0;

vector<vector<int>> dp(45, vector<int>(45, -1));
int f(int n, int r){
    if(dp[n][r] != -1){
        return dp[n][r];
    }

    if(n == r || r == 0){
        return 1;
    }

    return dp[n][r] = f(n - 1, r-1) + f(n-1, r);

}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >>m;

    cout << f(m - 1, m - n);
}