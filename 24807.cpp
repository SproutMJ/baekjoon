#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
vector<tuple<int, int, int>> v;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	for (int i = 0; i <= d / a; i++)
		for (int j = 0; j <= d / b; j++)
			for (int k = 0; k <= d / c; k++)
				if (i * a + j * b + k * c == d)
					v.push_back({ i, j, k });

	if (v.size() == 0)cout << "impossible";
	else
		for (const auto& i : v)
			cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << "\n";
}