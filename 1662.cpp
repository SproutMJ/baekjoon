#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
string fun(string val) {
	int idx = val.find('(');
	if (idx == string::npos) return val;
	else {
		int ridx = val.rfind(')');
		fun(val.substr(idx + 1, ridx - idx - 1));

	}
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	vector<char> ans;
	for (const auto& i : s) {
		if ('0' <= i && i <= '9')ans.push_back(i);
		else if(i == '(')
	}
}