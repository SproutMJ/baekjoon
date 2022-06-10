#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	while (t--) {
		int a;
		cin >> a;

		vector<pair<int, int>> v;

		for (int i = 1; i <= 5; i++) {
			int b = a - i;
			if (i < b)v.push_back({ i,b });
			else break;
		}
		cout << "Pairs for " << a << ":";
		if (v.size() != 0) {
			cout << " ";
			for (int i = 0; i < v.size() - 1; i++)
				cout << v[i].first << " " << v[i].second << ", ";
			cout << v.back().first << " " << v.back().second;
		}
		
		cout << "\n";
	}
}