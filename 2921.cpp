#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < i + 1; j++)
            sum += i + j;

    cout << sum;
}