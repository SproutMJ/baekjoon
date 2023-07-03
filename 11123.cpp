#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
const int rr[4] = { -1, 1, 0,0 };
const int cc[4] = { 0, 0, -1,1 };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		string arr[100];
		int h, w;
		cin >> h >> w;
		for (int i = 0; i < h; i++)
			cin >> arr[i];

		bool vist[100][100];
		memset(vist, 0, sizeof(vist));
		int ans = 0;
		for (int i = 0 ; i <h; i++)
			for (int j = 0; j < w; j++) {
				if (arr[i][j] == '#' && vist[i][j] == false) {
					queue<pair<int, int>> q;
					q.push({ i,j });
					while (!q.empty()) {
						pair<int, int> now = q.front();
						q.pop();

						for (int i = 0; i < 4; i++) {
							int r = now.first + rr[i];
							int c = now.second + cc[i];

							if (!(0 <= r && r < h)) continue;
							if (!(0 <= c && c < w)) continue;
							if (vist[r][c] == true || arr[r][c] == '.') continue;
							q.push({ r,c });
							vist[r][c] = true;
						}
					}

					ans++;
				}
			}

		cout << ans << "\n";
	}
}