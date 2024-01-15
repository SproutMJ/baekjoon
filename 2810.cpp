#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = count(s.begin(), s.end(), 'L')/2;

    cout << min(n + 1 - c, n);
}