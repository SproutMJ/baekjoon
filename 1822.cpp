#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int na, nb;
	cin >> na >> nb;
	vector<int> a(na), b(nb);
	for (auto& i : a)
		cin >> i;
	for (auto& i : b)
		cin >> i;


	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	vector<int> ans;
	set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter<vector<int>>(ans));

	cout << ans.size() << "\n";
	for (auto& i : ans)
		cout << i << " ";
}