#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void f() {
	cout << " @@@   @@@ \n";
	cout << "@   @ @   @\n";
	cout << "@    @    @\n";
	cout << "@         @\n";
	cout << " @       @ \n";
	cout << "  @     @  \n";
	cout << "   @   @   \n";
	cout << "    @ @    \n";
	cout << "     @     \n";
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		f();
	}
}