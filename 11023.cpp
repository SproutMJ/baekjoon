#include <iostream>
#include <queue>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<int> v;
	while (1) {
		int a;
		cin >> a;
		if (cin.eof()) {
			cout << accumulate(v.begin(), v.end(), 0);
			return 0;
		}
		v.push_back(a);
	}

}