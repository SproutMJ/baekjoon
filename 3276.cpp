#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 1; i <= ceil(sqrt(n)); i++) {
		v.push_back({ i, ceil((double)n / (double(i))) });
	}
	sort(v.begin(), v.end(), [](auto l, auto r)->bool {
		return abs(l.first - l.second) < abs(r.first - r.second);
		});

	cout << v.front().first << " " << v.front().second;
}