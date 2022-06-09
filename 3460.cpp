#include <iostream>
#include <bitset>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;

		bitset<20> b = n;
		
		for (int i = 0; i< 20; i++)
			if (b[i]) cout << i << " ";
	}
}