#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;

	if (a.length() >= b.length())cout << "go";
	else cout << "no";
}