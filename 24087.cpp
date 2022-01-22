#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double a, b, s;
	cin >> s >> a >> b;

	if (s == 0)cout << 0;
	else if (a >= s)cout << 250;
	else cout << 250 + (int)ceil((s - a) / b) * 100;
}