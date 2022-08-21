#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cout << fixed;
    cout.precision(2);

    while (1) {
        double a;
        cin >> a;
        if (a < 0)break;
        cout << "Objects weighing " << a << " on Earth will weigh " << a * 0.167 << " on the moon.\n";
    }
}