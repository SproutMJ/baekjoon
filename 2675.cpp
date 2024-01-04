#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        int nn;
        cin >> nn;
        string s;
        cin >> s;

        for (const auto &ch: s) {
            for (int i = 0; i < nn; i++) {
                cout << ch;
            }
        }
        cout << "\n";
    }
}