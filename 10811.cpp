#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int i = 0;
    generate_n(v.begin(), n, [&i]()->int{ return ++i; });

    while (m--) {
        int a,b;
        cin >> a >> b;
        reverse(v.begin() + a - 1, v.begin() + b);
    }

    for_each(v.begin(), v.end(), [](const int &v) -> void{ cout << v << " "; });
}