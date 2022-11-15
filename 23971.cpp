#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	double h, w, n, m;
	cin >> h >> w >> n >> m;
	cout << (long long)ceil(h / (n + 1)) * (long long)ceil(w / (m + 1));
}