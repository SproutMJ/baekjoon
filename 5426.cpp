#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
char arr[100][100];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<string> v(n);
	for (auto& i : v)cin >> i;

	for (const auto & i : v) {
		int len = sqrt(i.length());

		int idx = 0;
		for (int k = 0; k < len; k++)
			for (int j = 0; j < len; j++)
				arr[k][j] = i[idx++];

		for (int j = len - 1; j >= 0; j--)
			for (int k = 0; k < len; k++)
				cout << arr[k][j];
		cout << "\n";
	}
}