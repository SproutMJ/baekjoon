#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<string> v(n);
	for (auto& i : v)cin >> i;

	if (count(v.begin(), v.end(), "anj") >= 1)cout << "构具;";
	else cout << "构具?";
}