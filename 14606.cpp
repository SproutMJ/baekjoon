#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> memo;
int p(int n) {

    if(n == 1)
        return 0;
    if(n == 2)
        return 1;

    if(memo[n] == -1){
        int half = n/2;
        return memo[n] = p(half) + p(n - half) +  half*(n - half);
    }
    return memo[n];
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    memo.resize(n + 1, -1);
    cout << p(n);
}