#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	bool flag = false;

	char before = '/0';
	for (const auto& i : s) {
		if (i == 's' && i == before) {
			flag = true;
			break;
		}
		before = i;
	}

	if (flag)cout << "hiss";
	else cout << "no hiss";
}