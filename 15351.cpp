#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);
		int score = 0;
		for (const auto& i : s)
			if (i != ' ') score += (i - 'A' + 1);

		cout << ((score == 100) ? "PERFECT LIFE\n" : to_string(score) + "\n");
	}
}