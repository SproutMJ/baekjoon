#include <iostream>
#include <queue>
using namespace std;
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
bool visited[100][100];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	vector<string> v(a);
	for (auto& i : v)cin >> i;

	int ans = 0;
	for (int i = 0; i < a; i++) 
		for (int j = 0; j < b; j++) {
			if (visited[i][j] || v[i][j] == '.')continue;
			ans++;
			queue<pair<int, int>> q;
			q.push({ i, j });

			while (!q.empty()) {
				pair<int, int> pin = q.front();
				visited[pin.first][pin.second] = true;
				q.pop();

				for (int k = 0; k < 4; k++) {
					int ii = pin.first + x[k];
					int jj = pin.second + y[k];
					
					if (0 <= ii && ii < a && 0 <= jj && jj < b && v[ii][jj] == '#' && !visited[ii][jj])
						q.push({ ii, jj });
				}
			}
		}
	cout << ans;
}