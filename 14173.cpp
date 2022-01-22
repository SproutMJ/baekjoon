#include <iostream>
#include <algorithm>
using namespace std;
struct square {
	int a, b, c, d;
	friend istream& operator>>(istream &i, square &s) {
		cin >> s.a >> s.b >> s.c >> s.d;
		return i;
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	square a, b;
	cin >> a >> b;
	if (a.a > b.a)swap(a, b);
	if (a.a < b.a) cout << min(b.c - a.a, b.d - a.b) * min(b.c - a.a, b.d - a.b);
	else cout << min();
}