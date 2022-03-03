#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (true) {
		string s;
		getline(cin, s);
		if (s == "EOI") return 0;

		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if (s.find("nemo") == string::npos) cout << "Missing\n";
		else cout << "Found\n";
	}
}