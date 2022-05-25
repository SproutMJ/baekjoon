#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    double a;

    cin >> a;
    printf("%.10lf\n", a * a * sqrt(3) / 4);
}