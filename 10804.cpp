#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<int> v(20);
    for (int i = 0; i < 20; i++) {
        v[i] = i + 1;
    }

    int t = 10;
    while (t--) {
        int a,b;
        cin >> a >> b;

        reverse(v.begin() + a - 1, v.begin() + b);
    }

    for_each(v.begin(), v.end(), [](int v)->void{
        cout << v << " ";
    });
}