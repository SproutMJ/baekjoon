#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int size;
		cin >> size;

		if (size == 1)cout << "#\n\n";
		else {
			for (int i = 0; i < size; i++)cout << '#';
			cout << "\n";

			for (int i = 0; i < size - 2; i++) {
				cout << "#";
				for (int i = 0; i < size - 2; i++)cout << 'J';
				cout << "#\n";
			}



			for (int i = 0; i < size; i++)cout << '#';
			cout << "\n\n";
		}
	}
}