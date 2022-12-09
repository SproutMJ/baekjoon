#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n,w;
int dp[1001][1001];
pair<int, int> loc[1001];

int dist(pair<int, int> a, pair<int, int> b){
    return abs(b.first - a.first) + abs(b.second - a.second);
}


int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    cin >> n>>w;
    for (int i = 0; i<w; i++){
        cin >> loc[i].first >> loc[i].second;
    }
}