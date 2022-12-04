#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a;
	cin.ignore();
	getline(cin, b);
	string chr = "";
	stringstream sst;
	sst.str(b);
	char ch;
	while (sst >> ch)
		chr += ch;
	
	const char* cstr = chr.c_str();
	transform(a.begin(), a.end(), a.begin(), [&cstr](char v)->char {
		if (strchr(cstr, toupper(v)))
			return tolower(v);
		else return v;
		});

	cout << a;
}