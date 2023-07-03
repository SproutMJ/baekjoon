#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	int ans = 0;
	while (getline(cin, s)) {
		ans++;
	}

	cout << ans;
}