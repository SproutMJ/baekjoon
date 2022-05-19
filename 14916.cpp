#include <iostream>
#include <queue>
using namespace std;
int arr[100001];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	arr[1] = -1;
	arr[2] = 1;
	arr[3] = -1;
	arr[4] = 2;
	arr[5] = 1;
	for (int i = 6; i <= n; i++) {
		if (arr[i - 2] == -1 || arr[i - 5] == -1) {
			if (arr[i - 2] == -1 && arr[i - 5] == -1) arr[i] = -1;
			else if (arr[i - 2] == -1) arr[i] = arr[i - 5] + 1;
			else arr[i] = arr[i - 2] + 1;
		}
		else arr[i] = min(arr[i - 2], arr[i - 5]) + 1;
	}
	cout << arr[n];
}