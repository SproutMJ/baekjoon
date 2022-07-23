#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int ans = 0, n;
	cin >> n;
	switch (n) {
	case 1: 
		ans = 1;
		break;
	case 2:
		ans = 2;
		break;
	case 3:
		ans = 2;
		break;
	case 4:
		ans = 3;
		break;
	case 5:
		ans = 3;
		break;
	case 6:
		ans = 3;
		break;
	case 7:
		ans = 2;
		break;
	case 8:
		ans = 2;
		break;
	case 9:
		ans = 1;
		break;
	case 10:
		ans = 1;
		break;
	}

	cout << ans;
}