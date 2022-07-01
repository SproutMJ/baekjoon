#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	vector<string> v(a);
	for (auto& i : v)cin >> i;

	for (auto& i : v) {
		reverse(i.begin(), i.end());
		cout << i << "\n";;
	}
}