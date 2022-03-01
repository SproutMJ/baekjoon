#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool is(const int &n) {
	string s = to_string(n);
	int arr[10] = { 0 };
	for (const char& c : s) {
		arr[c - '0']++;
		if (arr[c - '0'] == 2)return false;
	}
	return true;
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	vector<string> v;
	string s;
	bool flag = true;
	while (flag == true) {
		getline(cin, s);
		string tmp;
		for (const char& ch : s)
			if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ch == '-') tmp.push_back(ch);
			else {
				if (tmp.length() != 0) {
					v.push_back(tmp);
					tmp = "";
				}
				else continue;
			}
		if (tmp == "E-N-D") {
			flag = false;
		}
	}

	stable_sort(v.begin(), v.end(), [](const string& l, const string& r)->bool {return l.length() > r.length(); });
	transform(v[0].begin(), v[0].end(), v[0].begin(), ::tolower);
	cout << v[0];
}