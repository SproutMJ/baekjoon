#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	cout << accumulate(s.begin(), s.end(), 0, [](int val, char ch)->int {
		return val + (int)pow(ch - '0', 5);
		});
}