#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (n == 0)break;

		vector<int> v(n);
		for (auto& i : v)cin >> i;
		int head = count(v.begin(), v.end(), 0);

		cout << "Mary won " << head << " times and John won " << n - head << " times\n";
	}
}