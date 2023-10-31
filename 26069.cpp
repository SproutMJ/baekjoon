#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    set<string> st;
    st.insert("ChongChong");

    int n;
    cin >> n;
    while (n--) {
        string l, r;
        cin >> l >> r;

        if (st.count(l) == 1) {
            st.insert(r);
        } else if (st.count(r) == 1) {
            st.insert(l);
        }
    }

    cout << st.size();
}