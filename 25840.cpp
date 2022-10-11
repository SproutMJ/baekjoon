#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	set<string> st;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		st.insert(s);
	}

	cout << st.size();
}