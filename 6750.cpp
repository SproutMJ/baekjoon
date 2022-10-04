#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	for (const auto& ch : s) {
		if (!strchr("IOSHZXN", ch)) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}