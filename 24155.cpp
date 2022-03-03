#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int score[100] = { 0 };
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v) cin >> i;
	for (const auto& i : v) score[100 - i]++;

	for (const auto& i : v)
		cout << accumulate(begin(score), begin(score) + 100 - i, 0) + 1 << "\n";
}