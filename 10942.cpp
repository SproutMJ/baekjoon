#include <iostream>
#include <vector>
using namespace std;
bool arr[2001][2001];
vector<int> v;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	v.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		arr[i][i] = 1;
		if (i != 1 && (v[i - 1] == v[i])) arr[i - 1][i] = true;
	}

	for (int i = 2; i <= n-1; i++)
		for (int j = 1; j + i <= n; j++)
			if (arr[j + 1][j + i - 1] && (v[j] == v[i + j])) arr[j][i + j] = true;

	int t;
	cin >> t;

	while (t--) {
		int s, e;
		cin >> s >> e;
		cout << arr[s][e] << "\n";
	}
}