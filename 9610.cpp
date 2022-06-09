#include <iostream>
#include <queue>
using namespace std;
int arr[5];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == 0 || b == 0)arr[4]++;
		else if (a > 0 && b > 0)arr[0]++;
		else if (a > 0 && b < 0)arr[3]++;
		else if (a < 0 && b > 0)arr[1]++;
		else arr[2]++;
	}

	for (int i = 0; i < 4; i++)
		cout << "Q" << i + 1 << ": " << arr[i] << "\n";
	cout << "AXIS: " << arr[4];
}