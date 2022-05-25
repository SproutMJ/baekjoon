#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    cout << 1.0 / (1 + pow(10, (b - a)/400.0));
}