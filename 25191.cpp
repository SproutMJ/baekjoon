#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int ch, co, be;
	cin >> ch >> co >> be;

	cout << min(co / 2 + be, ch);
}