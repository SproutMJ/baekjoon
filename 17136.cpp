#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
bool board[10][10];
int card[6] = {0, 0, 0, 0, 0, 0};
int ans = 987654321;
void dfs(){
    bool flag = true;
    int r = 0;
    int c = 0;
    for(r = 0; r<10; r++){
        for(c = 0; c<10; c++){
            if(board[r][c] == true){
                flag = false;
                break;
            }
        }
        if(flag == false){
            break;
        }
    }

    if(flag){
        int answer = 0;
        for(int i = 5; i>=1; i--){
            if(card[i]<=5){
                answer+=card[i];
            }else{
                return;
            }
        }
        ans = min(ans, answer);
        return;
    }

    for(int i = 5; i>=1; i--){
        if(r+i>10 || c+i>10){
            continue;
        }
        if(card[i] == 5){
            continue;
        }

        flag = true;
        for(int rr = r; rr<r+i; rr++){
            for(int cc = c; cc<c+i; cc++){
                if(!board[rr][cc]){
                    flag = false;
                    break;
                }
            }
            if(flag == false){
                break;
            }
        }

        if(flag == false){
            continue;
        }

        for(int rr = r; rr<r+i; rr++){
            for(int cc = c; cc<c+i; cc++){
                board[rr][cc] = false;
            }
        }
        card[i]++;
        dfs();

        for(int rr = r; rr<r+i; rr++){
            for(int cc = c; cc<c+i; cc++){
                board[rr][cc] = 1;
            }
        }
        card[i]--;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            cin>>board[i][j];
        }
    }

    dfs();
    cout << ((ans == 987654321)?-1: ans);
}