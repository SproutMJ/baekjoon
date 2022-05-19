#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	string s;
	cin >> s;

	int c = 0;
	for (const auto& i : s)
		if (i == 'C') c++;
	if (n - c == 0) cout << n;
	else {
		int ans = ceil((double)c / (double)(n - c + 1));
		cout << ans;
	}
}