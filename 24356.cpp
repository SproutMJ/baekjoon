#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, m, tt, mm;
	cin >> t >> m >> tt >> mm;
	
	int before = 60 * t + m;
	int after = 60 * tt + mm;
	if (before <= after) cout << after - before << " " << (after - before) / 30;
	else cout << 1440 - before + after << " " << (1440 - before + after) / 30;
	
}