#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int arr[3];
	for (auto& i : arr)cin >> i;
	sort(arr, arr + 3);

	if (arr[1] - arr[0] == arr[2] - arr[1]) cout << arr[2] + arr[2] - arr[1];
	else {
		if (abs(arr[1] - arr[0]) > abs(arr[2] - arr[1])) cout << (arr[1] + arr[0]) / 2;
		else cout << (arr[1] + arr[2]) / 2;
	}
}