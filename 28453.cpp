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
        int level;
        cin >> level;

        if (level == 300) {
            cout << 1;
        } else if (level >= 275) {
            cout << 2;
        } else if (level >= 250) {
            cout << 3;
        } else {
            cout << 4;
        }
        cout << " ";
    }
}