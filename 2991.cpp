#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int v, vv, vvv;
	cin >> v >> vv >> vvv;
	cout << ((v % (a + b)) <= a) + ((v % (c + d)) <= c) -((v % (a + b)==0)?1:0) - ((v % (c + d)==0)?1:0) << "\n";
	cout << ((vv % (a + b)) <= a) + ((vv % (c + d)) <= c) - ((vv % (a + b) == 0) ? 1 : 0) - ((vv % (c + d) == 0) ? 1 : 0) << "\n";
	cout << ((vvv % (a + b)) <= a) + ((vvv % (c + d)) <= c) - ((vvv % (a + b) == 0) ? 1 : 0) - ((vvv % (c + d) == 0) ? 1 : 0) << "\n";

}