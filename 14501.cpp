#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int a[2][16], n;
bitset<16> v;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) cin >> a[0][i] >> a[1][i];

	for (int i = 1; i <= n; i++) {
		if (i + a[0][i] > n)continue;

	}
}