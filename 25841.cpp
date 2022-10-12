#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, ans = 0;
	char ch;
	cin >> a >> b >> ch;

	for (int i = a; i <= b; i++) {
		string s = to_string(i);
		ans += count(s.begin(), s.end(), ch);
	}

	cout << ans;
}