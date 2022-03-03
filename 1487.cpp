#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<pair<int, int> > v(n);
	for (auto& i : v)
		cin >> i.first >> i.second;

	sort(v.begin(), v.end());

	pair<int, int> ans = make_pair(0, 0);
	for (int i = 0; i <= v.back().first; i++) {
		int tmp = 0;
		for (auto& p : v)
			if (i <= p.first && i - p.second > 0)
				tmp += (i - p.second);
		if (ans.second < tmp)
			ans = make_pair(i, tmp);
	}
	cout << ans.first;
}