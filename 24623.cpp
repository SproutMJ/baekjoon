#include <iostream>
#include <cmath>
using namespace std;
double n, a;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> a;

	cout << (int)round((180 - a) / 2 + a / 2);
}