#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
namespace f {
	int gcd(int a, int b) {
		if (a % b == 0)return b;
		return gcd(b, a % b);
	}
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	
	for (auto& i : v)cin >> i;

	sort(v.begin(), v.end());
	int gcd = v[1] - v[0];
	for (int i = 2; i < n; i++) gcd = f::gcd(gcd, v[i] - v[i - 1]);

	vector<int> ans;
	for (int i=2; i*i<=gcd; i++)
		if (gcd % i == 0) {
			ans.push_back(i);
			ans.push_back(gcd / i);
		}
	ans.push_back(gcd);

	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	for (const auto& i : ans)cout << i << " ";
}