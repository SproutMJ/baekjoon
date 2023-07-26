#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    if (n == 1) {
        string s;
        cin >> s;
        cout << "NO";
        return 0;
    }

    stack<string> st;
    while (n--) {
        string s;
        cin >> s;
        if (s == "A") {
            st.push(s);
        } else {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty())
        cout << "YES";
    else
        cout << "NO";
}