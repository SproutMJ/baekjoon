#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
int arr[300][300] = { 0 };
int k, siz, startx, starty, endx, endy;

queue<pair<int, int> > q;
int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
bool isin(int i, int j) {
	return (0 <= i && i < siz && 0 <= j && j < siz);
}
void bfs() {
	while (!q.empty()) {
		int i = q.front().first;
		int j = q.front().second;
		q.pop();

		for (int u = 0; u < 8; u++) {
			int ii = i + dx[u];
			int jj = j + dy[u];
			if (isin(ii, jj) && arr[ii][jj] == 0) {
				arr[ii][jj] = arr[i][j] + 1;
				q.push({ ii, jj });
			}
		}

	}
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	
	cin >> k;
	while (k--) {
		for (int i = 0; i < 300; i++)
			for (int j = 0; j < 300; j++)
				arr[i][j] = 0;
		cin >> siz;

		cin >> startx >> starty;
		cin >> endx >> endy;

		if (startx == endx && starty == endy) {
			cout << 0 << "\n";
		}
		else {
			q.push({ startx , starty });
			bfs();

			cout << arr[endx][endy] << "\n";
		}
	}
}