#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int arr[5];
	for (auto& i : arr) cin >> i;
	while (1) {
		for (int i = 0; i < 4; i++)
			if (arr[i] > arr[i + 1]) {
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
				for (const auto& i : arr)cout << i << " ";
				cout << "\n";
			}
		bool flag = false;
		for (int i = 0; i < 5; i++)
			if (arr[i] != i + 1) flag = true;
		if (!flag) return 0;
	}
}