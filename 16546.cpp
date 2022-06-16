#include <iostream>
#include <set>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	set<int> v;
	for (int i = 0; i < t - 1; i++) {
		int x;
		cin >> x;
		v.insert(x);
	}

	for (int i = 1; i <= t; i++)
		if (v.find(i) == v.end()) {
			cout << i;
			break;
		}
}