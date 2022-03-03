#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	string s;
	cin >> n >> s;
	if (n <= 25)cout << s;
	else {
		string sub = s.substr(n - 11, n);
		if (s.find(sub) != string::npos)
			cout << s.substr(0, 12) << "..." << sub;
		else cout << s.substr(0, 10) << "......" << s.substr(n-10, n);
	}
}