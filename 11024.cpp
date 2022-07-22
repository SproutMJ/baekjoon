#include <iostream>
#include <queue>
#include <numeric>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);


	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);
		vector<int> v;

		int t = 0;
		for (const auto& i : s) {
			if (t == 0)t = i - '0';
			else if (i != ' ') {
				t *= 10;
				t += (i - '0');
			}
			else {
				v.push_back(t);
				t = 0;
			}
		}
		v.push_back(t);

		cout << accumulate(v.begin(), v.end(), 0) << "\n";
	}
}