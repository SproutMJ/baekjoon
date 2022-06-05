#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char arr[8] = {'A', 'D', 'G', 'J', 'M', 'P', 'T', 'W' };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;

	cin.ignore();
	string s;
	getline(cin, s);

	int ans = 0;
	char before = ' ';
	for(const auto &i : s)
		if (i == ' ') {
			before = ' ';
			ans += a;
		}
		else {
			auto iter = lower_bound(arr, arr + 8, i);
			char low;
			if (*iter == i)low = i;
			else low = *(iter - 1);
			ans += (i - low + 1) * a;
			if (before == low)ans += b;
			before = low;
		}

	cout << ans;
}