#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    set<string> st;
    st.insert("Never gonna give you up");
    st.insert("Never gonna let you down");
    st.insert("Never gonna run around and desert you");
    st.insert("Never gonna make you cry");
    st.insert("Never gonna say goodbye");
    st.insert("Never gonna tell a lie and hurt you");
    st.insert("Never gonna stop");

    int n, t;
    cin >> n;
    t = n;
    cin.ignore();

    int ans = 0;
    while (t--) {
        string s;
        getline(cin, s);

        if (st.find(s) != st.end()) {
            ans++;
        }
    }

    if (ans == n) {
        cout << "No";
    }else{
        cout << "Yes";
    }
}