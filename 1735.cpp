#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

unsigned int lcm(unsigned int a, unsigned int b) {
    if (b == 0)return a;
    return lcm(b, a % b);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned int a, b, c, d;
    cin >> a >> b >> c >> d;
    unsigned int m = (b * d) / lcm(b, d);
    unsigned int x = (a * (m / b)) + (c * (m / d));
    unsigned int y = m;

    unsigned int k = lcm(x, y);
    cout << x / k << " " << y / k;
}