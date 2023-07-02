#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;
    if (a * 100 >= b) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}