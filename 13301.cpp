#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<unsigned long long> memo;
int f(unsigned long long n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    if(memo[n] == -1){
        return memo[n] = f(n - 1) + f(n - 2);
    }
    return memo[n];
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long long n;
    cin >> n;

    memo.resize(n + 1, -1);

    if(n == 1)
        cout << 4;
    else if(n == 2)
        cout << 6;
    else{
        cout << f(n) * 4 + f(n - 1) * 2;
    }
}