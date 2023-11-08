#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, a, b;
    cin >> n >> a >> b;

    if (a == max(n, b))cout << "Anything";
    else if (a < max(n, b))cout << "Bus";
    else cout << "Subway";
}