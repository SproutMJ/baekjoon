//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//
//	const long long INF = 0x7fffffffffffffff;
//	int n, m, a, b; long long w;
//	cin >> n >> m;
//	vector<vector<long long>> arr(n + 1, vector<long long>(n + 1, 0));
//	vector<vector<long long>> dis(n + 1, vector<long long>(n + 1));
//
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b >> w;
//		arr[a][b] = ((arr[a][b] != 0) ? min(w, arr[a][b]) : w);
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (i == j) dis[i][j] = 0;
//			else if (arr[i][j]) dis[i][j] = arr[i][j];
//			else dis[i][j] = INF;
//
//	for (int k = 1; k <= n; k++)
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				if (dis[i][k] != INF && dis[k][j] != INF)
//					dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//			cout << ((dis[i][j] == INF) ? 0 : dis[i][j]) << " ";
//		cout << "\n";
//	}
//}