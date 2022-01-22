#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int ans = 987654321;
int arr[21][21];
vector<bool> visited(21);
void f(int idx, int cnt)
{
	if (cnt == n / 2)
	{
		vector<int> start, link;
		for (int i = 1; i <= n; i++)
			if (visited[i] == true)
				start.push_back(i);
			else
				link.push_back(i);
		int sta = 0, li = 0;
		for (int i = 0; i < n / 2; i++)
			for (int j = 0; j < n / 2; j++)
				if (i != j)
				{
					sta += arr[start[i]][start[j]];
					li += arr[link[i]][link[j]];
				}
		ans = ((ans > abs(sta - li)) ? abs(sta - li) : ans);
		return;
	}

	for (int i = idx; i <= n; i++)
		if (visited[i] == false)
		{
			visited[i] = true;
			f(i + 1, cnt + 1);
			visited[i] = false;
		}
	return;
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	f(1, 0);
	cout << ans;
}