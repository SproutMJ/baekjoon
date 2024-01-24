#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    map<int, int> memo;

    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i <= abs(n); i++) {
        memo[i] = (memo[i - 1]%1000000000 + memo[i - 2]%1000000000)%1000000000;
    }

    if (n == 0) {
        cout << 0;
    }else if(n%2 == 0 && n < 0){
        cout << -1;
    }else{
        cout << 1;
    }
    cout << endl;
    cout << memo[abs(n)];
}