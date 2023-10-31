#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    cout << (x.back() - x.front()) * (y.back() - y.front());
}