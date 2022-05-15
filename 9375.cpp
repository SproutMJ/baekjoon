#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	
	int t;
	cin >> t;

	while (t--) {
		unordered_map<string, int> um;
		int n;
		cin >> n;
		
		while (n--) {
			string name, type;
			cin >> name >> type;
			if (um.find(type) == um.end()) um.insert({ type, 1 });
			else um[type]++;
		}
		
		int ans = 1;
		for (const auto& i : um)
			ans *= (i.second + 1);
		cout << ans - 1 << "\n";
	}
}