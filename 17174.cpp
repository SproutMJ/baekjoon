#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int cnt = n;

	while (n >= m) {
		n /= m;
		cnt += n;
	}

	cout << cnt;
}