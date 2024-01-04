#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    string s;
    cin >> n >> s;

    int t, e;
    t = e = 0;
    for (const auto &ch: s) {
        if(ch == '2')t++;
        else e++;
    }

    if (t == e) {
        cout << "yee";
    } else if (t > e) {
        cout << 2;
    } else cout << "e";
}