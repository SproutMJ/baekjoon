#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool f(const string &i, const string &j){
    if (i.length() * 2 != j.length()) {
        return false;
    }
    for (int a = 0; a < i.length(); a++) {
        if (!(i[a] == j[a * 2] && i[a] == j[a * 2 + 1])) {
            return false;
        }
    }

    return true;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    for(int i = 0; i<n; i++) {
        string s;
        cin >> s;

        if (!f(v[i], s)) {
            cout << "Not Eyfa";
            return 0;
        }
    }

    cout << "Eyfa";
}