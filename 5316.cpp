#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int sum;
	cin >> sum;

	while (true) {
		char f;
		int a;
		cin >> f;
		if (f == '=') {
			cout << sum;
			return 0;
		}

		cin >> a;

		switch (f)
		{
		case '+':
			sum += a;
			break;
		case '-':
			sum -= a;
			break;
		case '*':
			sum *= a;
			break;
		case '/':
			sum /= a;
			break;
		}
	}
}