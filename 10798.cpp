#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    vector<string> v;
    string s;
    int max_length = 0;
    while (cin >> s) {
        v.push_back(s);
        int length = s.length();
        max_length = max(length, max_length);
    }

    string ans;
    for (int i = 0; i < max_length; i++) {
        for (const auto &j: v) {
            if (i < j.length()) {
                ans += j[i];
            }
        }
    }

    cout << ans;
}