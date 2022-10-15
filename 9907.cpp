#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s, ss = "2765432";
	cin >> s;

	int val = inner_product(s.begin(), s.end(), ss.begin(), 0, plus<int>(), [](char l, char r) {return (l - '0')* (r - '0'); })%11;
	char ans;
	switch (val)
	{
	case 0:
		ans = 'J';
		break;
	case 1:
		ans = 'A';
		break;
	case 2:
		ans = 'B';
		break;
	case 3:
		ans = 'C';
		break;
	case 4:
		ans = 'D';
		break;
	case 5:
		ans = 'E';
		break;
	case 6:
		ans = 'F';
		break;
	case 7:
		ans = 'G';
		break;
	case 8:
		ans = 'H';
		break;
	case 9:
		ans = 'I';
		break;
	case 10:
		ans = 'Z';
		break;
	}

	cout << ans;
}