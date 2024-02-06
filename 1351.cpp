#include <iostream>
#include <queue>
#include <algorithm>
#include<map>

using namespace std;
map<unsigned long long, unsigned long long> memo;
unsigned long long n, p, q;

unsigned long long dp(unsigned long long i){
    if(i == 0){
        return 1;
    }

    if(memo.count(i) == 0){
        return memo[i] = dp(i/p) + dp(i/q);
    }

    return memo[i];
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> p >> q;
    cout << dp(n);
}