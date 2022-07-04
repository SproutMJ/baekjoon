#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<tuple<string, double, double, double>> v(n);

	for (auto& i : v) {
		string s;
		int a, b, c;
		cin >> s >> a >> b >> c;

		i = { s,a,b,c };
	}

	for (const auto& i : v) {
		string s;
		int a, b, c;
		tie(s, a, b, c) = i;

		cout << s << " " << a + b + c;
		if (a + b + c >= 55 && (a >= 35.0 * 0.3 && b >= 25.0 * 0.3 && c >= 40.0 * 0.3)) cout << " PASS\n";
		else cout << " FAIL\n";
	}
}