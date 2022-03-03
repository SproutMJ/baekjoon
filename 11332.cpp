#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
const int LIMIT = 100000000;
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int k;
	cin >> k;
	while (k--) {
		string s;
		int n, t, l;
		cin >> s >> n >> t >> l;

		if (s == "O (N)") {
			if (l * LIMIT >= t * n) cout << "May Pass.\n";
			else cout << "TLE!\n";
		}
		else if (s == "O (N^2)") {
			if (l * LIMIT >= t * (n * n)) cout << "May Pass.\n";
			else cout << "TLE!\n";
		}
		else if (s == "O (N^3)") {
			if (l * LIMIT >= t * (n * n * n)) cout << "May Pass.\n";
			else cout << "TLE!\n";
		}
		else if (s == "O (2^N)") {

		}
		else {

		}
	}
}