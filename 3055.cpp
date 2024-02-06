#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int r, c;
     cin >> r >> c;

     vector<pair<int, int>> water;
     vector<string> board(r);
     pair<int, int> start, dest;
     for(int i =0; i<r; i++){
         cin >> board[i];
         for(int j = 0; j<c; j++){
             if(board[i][j] == 'S'){
                 start = {i, j};
             }
             if(board[i][j] == 'D'){
                 dest = {i, j};
             }
             if(board[i][j] == '*'){
                 water.push_back({i, j});
             }
         }
     }

     vector<vector<int>> wv(r, vector<int>(c, 987654321));
     queue<tuple<int, int, int>> q;
    pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for(const auto &w: water){
        q.push({w.first, w.second, -1});
    }
    while(!q.empty()){
        auto[row, col, cnt] = q.front();
        q.pop();

        for(const auto &d: diff){
            int nr = row+d.first;
            int nc = col+d.second;
            if(nr<0||nr>=r||nc<0||nc>=c){
                continue;
            }

            if(wv[nr][nc] <987654321){
                continue;
            }
            if(board[nr][nc] == '.'||board[nr][nc] == 'S'){
                wv[nr][nc] = cnt+1;
                q.push({nr, nc, cnt+1});
            }
        }
    }

    vector<vector<int>> bv(r, vector<int>(c, 987654321));
    q.push({start.first, start.second, 0});
     while(!q.empty()){
         auto[row, col, cnt] = q.front();
         q.pop();

         for(const auto &d: diff){
             int nr = row+d.first;
             int nc = col+d.second;
             if(nr<0||nr>=r||nc<0||nc>=c){
                 continue;
             }

             if(board[nr][nc] == 'D'){
                 cout << cnt+1;
                 return 0;
             }

             if(board[nr][nc] == '.' && cnt+1 <= wv[nr][nc] && cnt+1 < bv[nr][nc]){
                 bv[nr][nc] = cnt+1;
                 q.push({nr, nc, cnt+1});
             }
         }
     }

     cout << "KAKTUS";
}