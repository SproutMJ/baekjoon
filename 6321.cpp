#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	
	for (int t = 1; t <= n; t++) {
		string s;
		cin >> s;

		cout << "String #" << t << "\n";
		for (const auto& i : s)
			cout << ((i == 'Z') ? 'A' : (char)(i + 1));
		cout << "\n\n";
	}
}