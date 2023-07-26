#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;

    set<string> st;
    while (n--) {
        string s;
        cin >> s;
        if (s == "ENTER") {
            st.clear();
            continue;
        }

        if (st.find(s) == st.end()) {
            ans++;
            st.insert(s);
        }
    }

    cout << ans;
}