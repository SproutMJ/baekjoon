#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (auto& i : v)
		cin >> i.first >> i.second;

	int sa = 0, sb = 0;
	for (const auto& i : v) {
		if (i.first > i.second)sa += i.first +i.second;
		else if (i.first < i.second)sb += i.first + i.second;
		else {
			sa += i.first;
			sb += i.second;
		}
	}
	cout << sa << " " << sb;
}