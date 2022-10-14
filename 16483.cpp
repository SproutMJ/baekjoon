#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	double ans = (double)t / 2.0;
	cout << (int)(ans * ans + 0.5) << "\n";
}