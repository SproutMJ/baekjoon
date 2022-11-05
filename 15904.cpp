#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	getline(cin, s);
	char arr[] = { 'U', 'C', 'P', 'C' };

	int idx = 0;
	for (const auto& i : s) {
		if (idx == 4) break;
		if (arr[idx] == i) {
			idx++;
		}
	}

	if (idx == 4)cout << "I love UCPC";
	else cout << "I hate UCPC";
}