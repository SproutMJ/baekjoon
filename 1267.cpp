#include <iostream>
#include <queue>
#include <climits>
#include <tuple>
using namespace std;
int y(int val) {
	return val / 30 + ((val % 30 != 0) ? 15 : 0);
}
int m(int val) {
	return val / 60 + ((val % 60 != 0) ? 15 : 0);
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	vector<int> v(n);
	for (auto& i : v) cin >> i;

	int y, n;
	
}