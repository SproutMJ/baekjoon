#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int d, p;
    d = p = 0;

    while (n--) {
        string s;
        cin >> s;
        if (s == "D") {
            d++;
        }else {
            p++;
        }
        if (abs(d - p) == 2) {
            cout << d << ":" << p;
            return 0;
        }
    }

    cout << d << ":" << p;
    return 0;
}