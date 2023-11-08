#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int ans = 0;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.find("01") != string::npos || s.find("OI") != string::npos) {
            ans++;
        }
    }

    cout << ans;
}