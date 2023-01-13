#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<string> v;
	v.push_back(" @@@   @@@ ");
	v.push_back("@   @ @   @");
	v.push_back("@    @    @");
	v.push_back("@         @");
	v.push_back(" @       @ ");
	v.push_back("  @     @  ");
	v.push_back("   @   @   ");
	v.push_back("    @ @    ");
	v.push_back("     @     ");

	int n;
	cin >> n;
	for (const auto& i : v) {
		for (int j = 0; j < n; j++) {
			cout << i;
			if (j != n - 1)
				cout << " ";
		}
		cout << "\n";
	}
}