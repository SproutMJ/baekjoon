#include <iostream>
#include <queue>
using namespace std;

int k, w, h, wi, hi;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	
	cin >> k;

	vector<pair<int, int>> v;
	for (int i = 0; i < 6; i++) {
		int a, b;
		cin >> a >> b;

		if (a <= 2)
		{
			if (b > w)
				w = b, wi = i;
		}
		else
		{
			if (b > h)
				h = b, hi = i;
		}

		v.push_back({ a,b });
	}

	int p = wi;
	if (wi + 1 == hi || wi == 5 && hi == 0)
		p = hi;

	cout << (w * h - v[(p + 2) % 6].second * v[(p + 3) % 6].second) * k;
}