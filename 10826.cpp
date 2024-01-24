#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> memo(10001, -1);
int fibo(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    if(memo[n] == -1){
        return memo[n] = fibo(n-1) + fibo(n - 2);
    }
    return memo[n];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

    cout << fibo(n);

}