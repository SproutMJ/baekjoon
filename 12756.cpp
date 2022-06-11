#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	pair<int, int> a, b;
	cin >> a.first >> a.second;
	cin >> b.first >> b.second;

	bool flag = true;
	while (a.second > 0 && b.second > 0) {
		a.second -= b.first;
		b.second -= a.first;
	}

	if (a.second <= 0 && b.second <= 0)cout << "DRAW";
	else if (a.second <= 0)cout << "PLAYER B";
	else cout << "PLAYER A";
}