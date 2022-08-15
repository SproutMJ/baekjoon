#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;

	try {
		if (find_if(a.begin(), a.end(), [](auto val)->bool {return val < '0' || val>'9'; }) != a.end() || find_if(b.begin(), b.end(), [](auto val)->bool {return val < '0' || val>'9'; }) != b.end()) throw a;
		cout << stoi(a) - stoi(b);
	}
	catch(string e) {
		cout << "NaN";
	}
}