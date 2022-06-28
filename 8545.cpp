#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	cout << s;
}