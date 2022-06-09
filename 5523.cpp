#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	pair<int, int> p = { 0,0 };
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		if (a > b)p.first++;
		else if (a < b)p.second++;
	}

	cout << p.first << " " << p.second;
}