#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		if (n * s < n * p + d)cout << "do not parallelize\n";
		else if (n * s > n * p + d)cout << "parallelize\n";
		else cout << "does not matter\n";
	}
}