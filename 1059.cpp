#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

vector<int> arr;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++)cin >> arr[i];

	int k;
	cin >> k;

	sort(arr.begin(), arr.end());
	int ans = 0;
	for (int i = 1; i < n; i++)
		if (arr[i - 1] < k && k < arr[i]) {
			for (int j = arr[i - 1] + 1; j <= k; j++)
				for (int u = k; u < arr[i]; u++)
					ans++;
		}
	cout << ans - 1;
}
