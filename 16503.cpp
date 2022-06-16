#include <iostream>
using namespace std;
int fun(int a, char f, int b) {
	switch (f)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	default:
		return a / b;
	}
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	char x, y;
	cin >> a >> x >> b >> y >> c;

	int ans = fun(fun(a, x, b), y, c), aans = fun(a, x, fun(b, y, c));
	if (ans < aans)cout << ans << " " << aans;
	else cout << aans << " " << ans;
}