#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
stack<int> st;

void f(int inst) {
    int t;
    switch (inst) {
        case 1:
            cin >> t;
            st.push(t);
            break;
        case 2:
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
                st.pop();
            }
            break;
        case 3:
            cout << st.size() << "\n";
            break;
        case 4:
            cout << st.empty() << "\n";
            break;
        case 5:
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
            }
            break;
    }
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        int i;
        cin >> i;
        f(i);
    }
}