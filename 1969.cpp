#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	for (auto &i:v)
		cin >> i;

	char dna[4] = { 'A', 'C', 'G', 'T' };
	string ans = "";
	int sum = 0;
	for (int i = 0; i < m; i++) {
		char t_c;
		int t_s = 987654321, t = 0;
		for (int k = 0; k < 4; k++) {
			for (int j = 0; j < n; j++)
				if (dna[k] != v[j][i])t++;
			if (t < t_s) {
				t_c = dna[k];
				t_s = t;
			}
			t = 0;
		}
		ans += t_c;
		sum += t_s;
	}
	cout << ans << "\n" << sum;
}