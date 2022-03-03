#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<string> v;
	string s;
	while(getline(cin, s)){
		v.push_back(s);
	}

	for (auto& i : v) {
		i[0] = ::toupper(i[0]);
		cout << i;
	}
}