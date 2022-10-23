#include <iostream>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;
int dp[3999][4000];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	unordered_map<char, int> ump = { {'A',3}, {'B',2}, {'C',1}, {'D',2}, {'E',3}, {'F',3}, {'G',2}, {'H',3}, {'I',3}, {'J',2}, {'K',2}, {'L',1}, {'M',2}, {'N',2}, {'O',1}, {'P',2}, {'Q',2}, {'R',2}, {'S',1}, {'T',2}, {'U',1}, {'V',1}, {'W',1}, {'X',2}, {'Y',2}, {'Z',1} };
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		dp[0][2 * i] = ump[a[i]];
	}
	for (int i = 0; i < a.length(); i++) {
		dp[0][2 * i + 1] = ump[b[i]];
	}

	for (int i = 1; i < a.length() * 2 - 1; i++) {
		for (int j = 0; j < a.length() * 2 - i; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1]) % 10;
		}
	}


	cout << dp[a.length() * 2 - 2][0] << dp[a.length() * 2 - 2][1];
}