#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		s.erase(unique(s.begin(), s.end()) - s.begin());
		cout << s << "\n";
	}
}