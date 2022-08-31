#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;

	int ans = 0;
	for (int i = 0; i < 4; i++) {
		if (a[i] != b[i]) ans++;
	}

	cout << pow(2, ans);
}