#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    n = pow(4, n);
    int k = sqrt(n);
    int sum = 0;
    for (int i = 0; i < k + 1; i++) {
        sum += (k + 1);
    }

    cout << sum;
}