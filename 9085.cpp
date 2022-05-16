#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		int t, s = 0;
		while (k--) {
			cin >> t;
			s += t;
		}
		cout << s << "\n";
	}
}