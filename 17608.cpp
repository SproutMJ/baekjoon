#include <iostream>
#include <vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)
		cin >> i;
	int stand = 0, ans = 0;
	for (auto i = v.rbegin(); i != v.rend(); i++)
		if (*i > stand) {
			ans++;
			stand = *i;
		}
	cout << ans;
}