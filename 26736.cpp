#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a = 0, b = 0;
	string s;
	cin >> s;
	for (const auto& i : s)
		if (i == 'A')a++;
		else b++;

	cout << a << " : " << b;
}