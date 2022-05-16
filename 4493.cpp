#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int k;
	cin >> k;
	while (k--) {
		int t;
		cin >> t;
		int sa = 0, sb = 0;
		while (t--) {
			char a, b;
			cin >> a >> b;
			if (a == b)continue;
			if (a == 'R')
				if (b == 'P') sb++;
				else sa++;
			else if (a == 'P')
				if (b == 'R') sa++;
				else sb++;
			else
				if (b == 'R') sb++;
				else sa++;
		}
		if (sa == sb)cout << "TIE\n";
		else if (sa < sb)cout << "Player 2\n";
		else cout << "Player 1\n";
	}
}