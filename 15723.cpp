#include <iostream>
#include <queue>
#include <algorithm>
#include<limits>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int limit = numeric_limits<int>::max() / 2;
    vector<vector<int>> board(26, vector<int>(26, limit));
    for (int i = 0; i < n; i++) {
        board[i][i] = 0;
    }

    while (n--) {
        string a, t, b;
        cin >> a >> t >>b;
        board[a.front() - 'a'][b.front() - 'a'] = 1;
    }

    vector<vector<int>> dist = board;
    for(int k = 0; k<26; k++){
        for(int i = 0; i<26; i++){
            for(int j = 0; j<26; j++){
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int m;
    cin >> m;
    while (m--) {
        string a, t, b;
        cin >> a >> t >>b;
        if(dist[a.front() - 'a'][b.front() - 'a'] != limit)
            cout << "T\n";
        else
            cout << "F\n";
    }
}