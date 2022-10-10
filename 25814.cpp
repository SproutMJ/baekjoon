#include <iostream>
#include <queue>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;

	int x = accumulate(a.begin(), a.end(), 0, [](char a, int val)->int {return (int)(a - '0') + val; }) * a.length();
	int y = accumulate(b.begin(), b.end(), 0, [](char a, int val)->int {return (int)(a - '0') + val; }) * b.length();
	if (x > y)cout << 1;
	else if (x < y)cout << 2;
	else cout << 0;
}