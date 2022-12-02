#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (const auto& i : s)
		if (i == 'A')a++;
		else b++;

	if (a == b)cout << "Tie";
	else if (a > b)cout << "A";
	else cout << "B";
}