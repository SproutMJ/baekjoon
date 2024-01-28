#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int dp[101][101][2];

int f(int n, int k, int b){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        if(k == 0){
            return 1;
        }
        return 0;
    }
    if(dp[n][k][b] != -1){
        return dp[n][k][b];
    }
    if(b == 0) {
            return dp[n][k][0] = f(n - 1, k, 0) + f(n - 1, k, 1);
    }
    return dp[n][k][1] = f(n - 1, k, 0) + f(n - 1, k - 1, 1);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    while(n--){
        fill(&dp[0][0][0], &dp[0][0][0] + 101*101*2, -1);
        int a, b;

        cin >> a >> b;
        cout << f(a, b, 0) + f(a, b, 1) << "\n";
    }
}