#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		vector<int> v(10);
		for (auto& i : v)cin >> i;
		bool zack = find(v.begin(), v.end(), 17) != v.end();
		bool mack = find(v.begin(), v.end(), 18) != v.end();

		for (const auto& i : v)cout << i << " ";
		cout << "\n";
		if (zack == false && mack == false)cout << "none";
		else if (zack && mack)cout << "both";
		else if (zack) cout << "zack";
		else cout << "mack";
		cout << "\n\n";
	}
}