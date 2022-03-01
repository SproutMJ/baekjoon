#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<tuple<string, int, int, int>>v(n);

	for (auto& i : v) {
		string s;
		int a, b, c;
		cin >> s >> a >> b >> c;
		i = make_tuple(s, a, b, c);
	}

	sort(v.begin(), v.end(), [](auto& l, auto& r)->bool {
		if (get<3>(l) != get<3>(r)) return get<3>(l) < get<3>(r);
		else if (get<2>(l) != get<2>(r)) return get<2>(l) < get<2>(r);
		else return get<1>(l) < get<1>(r);
		});
	cout << get<string>(v.back()) << "\n" << get<string>(v.front());
}