#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a, d, k;
    cin >> a >> d >> k;

    if ((k - a) % d || (k - a) / d < 0)
        cout << "X";
    else
        cout << (k - a) / d + 1;
}