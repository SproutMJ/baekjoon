#include <iostream>
#include <string>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s, '\n');

		pair<int, int> p = accumulate(s.begin(), s.end(), make_pair(0, 0), [](pair<int, int> val, char ch)->pair<int, int> {
			char low = tolower(ch);
			if (low == 'g') val.first++;
			else if (low == 'b') val.second++;
			return val;
			});
		
		cout << s << " is " <<  ((p.first>p.second)?"GOOD" : ((p.first == p.second)?"NEUTRAL" : "A BADDY")) << "\n";
	}
}