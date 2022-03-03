#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	for (auto &i:v)
		cin >> i;

	int len[50][4] = {0};
	char dna[4] = { 'A', 'T', 'G', 'C' };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			len[i][find(begin(dna), end(dna), v[j][i]) - begin(dna)]++;
		}
	}
}