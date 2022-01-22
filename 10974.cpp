#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a = 1;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v) i = a++;

	do {
		for (const auto& i : v) cout << i << " ";
		cout << "\n";
	} while (next_permutation(v.begin(), v.end()));
}