#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = 0;
	string div = "1111111111";
	while (n > 0) {
		int quo = n / stoi(div);
		ans += quo;
		n -= quo * stoi(div);
		div.pop_back();
	}
	cout << ans;
}