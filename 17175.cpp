#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int dp[51];
int fibonacci(int n) { // 호출
    if (n < 2) {
        return 1;
    }
    else if(dp[n] != 0) return dp[n];
    return dp[n] = (fibonacci(n-2) + fibonacci(n-1) + 1)%1000000007;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << fibonacci(n);
}
