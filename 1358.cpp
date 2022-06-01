#include <iostream>
#include <cmath>
using namespace std;
double w, h, x, y, p;
bool square(double xx, double yy) {
	if (xx >= x && xx <= x + w && yy >= y && yy <= y + h)return true;
	return false;
}

double dist(double a, double b, double aa, double bb) {
	return sqrt((a - aa) * (a - aa) + (b - bb) * (b - bb));
}

bool circle(double xx, double yy) {
	if (dist(x, y + h / 2, xx, yy) <= h / 2) return true;
	if (dist(x + w, y + h / 2, xx, yy) <= h / 2) return true;
	return false;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> w >> h >> x >> y >> p;
	int ans = 0;
	for (int i = 0; i < p; ++i) {
		double xx, yy;
		cin >> xx >> yy;
		if (square(xx, yy)) ans++;
		else if (circle(xx, yy)) ans++;
	}
	cout << ans;
}