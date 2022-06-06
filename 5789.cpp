#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<string> v(n);
	for (auto& i : v)cin >> i;
	for (const auto& i : v)
		cout << ((i[i.length() / 2] == i[i.length() / 2 - 1]) ? "Do-it\n" : "Do-it-Not\n");
}