#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<int> v(9);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (auto& i : v)cin >> i;

	sort(v.begin(), v.end());
	int sum = accumulate(v.begin(), v.end(), 0);
	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 9; j++)
			if (sum - v[i] - v[j] == 100) {
				for (int k = 0; k < 9; k++)
					if (!(k == i || k == j)) cout << v[k] << "\n";
				return 0;
			}
}