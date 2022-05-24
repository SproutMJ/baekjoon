#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	char ch;
	cin >> ch;
	if (ch == 'N' || ch == 'n') cout << "Naver D2";
	else cout << "Naver Whale";
}