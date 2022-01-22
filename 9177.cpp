#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool v[201][201];
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int q = 1; q <= n; q++) {
		string a, b, c;
		cin >> a >> b >> c;
		
		v[0][0] = true;
		for (int i = 1; i <= a.length(); i++) {
			if (a[i - 1] != c[i - 1]) v[i][0] = false;
			else v[i][0] = v[i - 1][0];
		}
		for (int j = 1; j <= b.length(); j++) {
			if (b[j - 1] != c[j - 1])v[0][j] = false;
			else v[0][j] = v[0][j - 1];
		}

		for (int i = 1; i <= a.length(); i++) {
			for (int j = 1; j <= b.length(); j++) {
				if (a[i - 1] == c[i + j - 1] && b[j - 1] != c[i + j - 1]) {
					v[i][j] = v[i - 1][j];
				}
				else if (a[i - 1] != c[i + j - 1] && b[j - 1] == c[i + j - 1]) {
					v[i][j] = v[i][j - 1];
				}
				else if (a[i - 1] == c[i + j - 1] && b[j - 1] == c[i + j - 1]) {
					v[i][j] = v[i][j - 1] || v[i - 1][j];
				}
				else v[i][j] = false;
			}
		}

		cout << "Data set " << q << ": " << ((v[a.length()][b.length()]) ? "yes\n" : "no\n");
	}
}