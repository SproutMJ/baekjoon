#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[3];
	for (auto& i : a) cin >> i;
	sort(begin(a), end(a));

	if ((a[0] + a[1] == a[2]) || (a[0] == a[1] || a[1] == a[2]))cout << 'S';
	else cout << 'N';
}