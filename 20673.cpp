#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	if(a<=50&&b<=10)cout << "White";
	else if(b>30)cout << "Red";
	else cout << "Yellow";
}