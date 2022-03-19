#include <iostream>
#include <deque>
using namespace std;
int arr[1000];
int dp[1000];
int before[1000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	pair<int, int> ans = {0, -1};
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j]&&dp[i]< dp[j] + 1) {
				dp[i] = dp[j] + 1;
				before[i] = j;
			}
		}
		if (ans.second < dp[i]) {
			ans.second = dp[i];
			ans.first = i;
		}
	}

	deque<int> log;
	int k = ans.first;
	for (int i = 0; i < ans.second; i++) {
		log.push_front(arr[k]);
		k = before[k];
	}
	cout << ans.second << "\n";
	for (auto& i : log) cout << i << " ";
}