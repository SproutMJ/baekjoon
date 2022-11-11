#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int arr[100][100];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;

		for (int i = a; i < a + 10; i++)
			for (int j = b; j < b + 10; j++)
				arr[i][j] = 1;
	}

	int ans = 0;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (arr[i][j])
				ans++;
	cout << ans;
}