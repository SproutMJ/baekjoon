#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a;
	cin >> a;

	vector<int> v(n - 1);
	for (auto& i : v) cin >> i;
	for (const auto& i : v) {
		int div = gcd(i , a);
		cout << a / div << "/" << i / div << "\n";
	}
}