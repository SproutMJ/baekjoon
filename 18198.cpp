#include <iostream>
#include <queue>
using namespace std;
int a, b;

int main() {

    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    string s;

    cin >> s;
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == 'A') a += s[i + 1] - '0';
        else b += s[i + 1] - '0';
    }
    if (a > b) cout << "A";
    else cout << "B";
}