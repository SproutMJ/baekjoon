#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        int a, b, x;
        cin >>a>>b>>x;
        cout << a * (x - 1) + b << "\n";
    }
}