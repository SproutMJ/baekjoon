#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << min((b / d) * (c / d), a);
}