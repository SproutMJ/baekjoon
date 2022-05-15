#include <iostream>
#include<cstring>
using namespace std;
int n, answer;
int map[16][16];
int cost[16][1 << 16];
int dfs(int _n, int b) {
    if (b == answer) {
        if (map[_n][0] == 0) return 987654321;
        else return map[_n][0];
    }

    if (cost[_n][b] != -1)return cost[_n][b];
    cost[_n][b] = 987654321;

    for (int i = 0; i < n; i++) {
        if (map[_n][i] == 0)continue;
        if ((b & (1 << i)) == (1 << i))continue;

        cost[_n][b] = min(cost[_n][b], map[_n][i] + dfs(i, b | 1 << i));
    }
    return cost[_n][b];
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> map[i][j];

    answer = (1 << n) - 1;
    memset(cost, -1, sizeof(cost));
    cout << dfs(0, 1);
}