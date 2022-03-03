#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;

		vector<pair<string, string> > v;
		for (int i = 0; i < n; i++) {
			string s, tmp;
			cin >> s;
			tmp = s;
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			v.push_back(make_pair(s, tmp));
		}

		stable_sort(v.begin(), v.end());
		cout << v[0].second << "\n";
	}
}