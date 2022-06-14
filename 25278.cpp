#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, tem = -30, wat = 0, ox = 0;
	cin >> n;
	while (n--) {
		string s, val;
		cin >> s >> val;
		val.erase(val.begin(), val.begin() + 1);

		if (s == "temperature")tem += stoi(val);
		else if (s == "ocean") wat += stoi(val);
		else ox += stoi(val);
	}

	if (tem >= 8 && ox >= 14 && wat >= 9)cout << "liveable";
	else cout << "not liveable";
}