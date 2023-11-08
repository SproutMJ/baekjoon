#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

unsigned long long f(unsigned long long n){
    if(n == 0)
        return 1;
    return n * f(n - 1);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    cout << f(n);
}