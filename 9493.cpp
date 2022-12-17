#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

const int HOUR = 3600;
const int MINUTE = 60;

int main() {
    while (1) {
        double m,a,b;
        cin >> m>>a>>b;

        if (m == 0 && a == 0 && b == 0)
            break;

        double d = m / a * HOUR;
        double dd = m / b * HOUR;

        int diff = round(abs(d - dd));
        printf("%d:%02d:%02d\n", diff / HOUR, diff % HOUR / MINUTE, diff % HOUR % MINUTE);
    }
}
