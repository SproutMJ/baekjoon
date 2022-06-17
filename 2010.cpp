#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);


	int n, ans;
	cin >> n >> ans;
	n--;
	 
	while (n--) {
		int x;
		cin >> x;
		ans += (x - 1);
	}

	cout << ans;
}