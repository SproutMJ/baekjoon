#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int a;
        char ch;
        cin >> a >> ch;
        for (int i = 0; i < a; i++)
            cout << (char)ch;
        cout << "\n";
    }
}
