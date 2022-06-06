#include <iostream>
#include <queue>
#include <numeric>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;
	double clu;
	cin >> clu;

	unsigned long long sum = accumulate(v.begin(), v.end(), 0LL, [&clu](unsigned long long val, double a)-> unsigned long long {
		val += ceil(a / clu) * clu;
		return val;
		});
	cout << sum;
}