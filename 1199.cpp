#include <iostream>
#include <vector>
using namespace std;
int n;
int v[1001][1001];
int degree[1001];
void dfs(int vv) {
    for (int &i=degree[vv]; i <= n; i++)
        while (i<=n&&v[vv][i]) {
            v[vv][i]--;
            v[i][vv]--;
            dfs(i);
        }
    cout << vv << " ";
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];

            degree[i] += v[i][j];
            degree[j] += v[i][j];
        }

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        degree[i] /= 2;
        if (degree[i] % 2) {
            flag = false;
            break;
        }
    }

    fill(degree, degree + 1001, 1);
    if (flag) dfs(1);
    else cout << -1;
}