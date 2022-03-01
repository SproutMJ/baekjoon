#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int arr[500][500] = { 0 };
	vector<vector<int>> v(500);
	for (auto &i : v)i.resize(500, 0);
	
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> arr[i][j];
	v[0][0] = arr[0][0];
	int max = 0;

	if (n == 1)cout << arr[0][0];
	else {
		for (int i = 1; i < n; i++)
			for (int j = 0; j < i + 1; j++) {
				if (j == 0) v[i][j] = arr[i][j] + v[i - 1][j];
				else if (j == i) v[i][j] = arr[i][j] + v[i - 1][j - 1];
				else v[i][j] = std::max(arr[i][j] + v[i - 1][j], arr[i][j] + v[i - 1][j - 1]);
				max = std::max(v[i][j], max);
			}
		cout << max;
	}
}