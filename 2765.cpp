#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(2);
    int cnt = 0;
    while (1) {
        double diamet, rotated, sec;
        cin >> diamet >> rotated >> sec;

        if (rotated == 0)
            break;

        double moved = diamet / (5280.0 * 12.0) * rotated * M_PI;
        cout << "Trip #" << ++cnt << ": " << moved << " " << moved / sec * 3600 << "\n";
    }
}
