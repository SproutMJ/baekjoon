#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> v(n);

	for (auto& i : v) cin >> i;

	sort(v.begin(), v.end());
	cout << v.front() * v.back();
}