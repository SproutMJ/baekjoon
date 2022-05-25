#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int m, s, g;
	cin >> m >> s >> g;
	double a, b;
	cin >> a >> b;
	int l, r;
	cin >> l >> r;

	int lwait = l / a;
	int rwait = r / b;
	int ls = ((m % g) ? m / g + 1 : m / g);
	int rs = ((m % s) ? m / s + 1 : m / s);

	if (ls < rs) {
		if (ls + lwait < rs + rwait) cout << "friskus";
		else cout << "latmask";
	}
	else {
		if (ls + lwait < rs + rwait) cout << "friskus";
		else cout << "latmask";
	}
}