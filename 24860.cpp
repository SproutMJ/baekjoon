#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long  v, j;
	cin >> v >> j;

	long long   vv, jj;
	cin >> vv >> jj;

	long long   vvv, ddd, jjj;
	cin >> vvv >> ddd >> jjj;

	cout << (vvv * ddd * jjj) * (v * j + vv * jj);
}