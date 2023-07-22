#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    string s;
    cin >> s;

    int length = s.length() / 2;
    for (int i = 0; i < length; i++) {
        if(s[i] != s[s.length() - i - 1]) {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
}