#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int a;
		cin >> a;
		cout << "Case " << i << ":\n";
		for (int j = 1; j <= 6; j++) {
			if (j > a - j)break;
			if (j > 6 || a - j > 6)continue;
			cout << "(" << j << "," << a - j << ")\n";
		}
	}
}