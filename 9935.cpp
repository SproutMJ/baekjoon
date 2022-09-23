#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s, bom;
	cin >> s >> bom;

	vector<char> v;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		v.push_back(s[i]);

		if (v.size() >= bom.length()) {
			bool flag = true;
			for (int i = 0; i < bom.length(); i++) {
				if (v[v.size() - bom.length() + i] != bom[i]) {
					flag = false;
					break;
				}
			}

			if (flag) {
				for (int i = 0; i < bom.length(); i++) {
					v.pop_back();
				}
			}
		}
		
		
	}

	if (v.empty()) {
		cout << "FRULA";
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
	}
}