#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int ans[100][2][20];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string r, a, b;
    cin >> r >> a >>b;

    fill(&ans[0][0][0], &ans[0][0][0] + 1 * 2 * 20, 0);

    for(int i = 0; i<a.size(); i++){
        int j = 0;
        if(a[i] == r[j]){
            ans[i][0][j]  = 1;
        }
        if(b[i] == r[j] ){
            ans[i][1][j]  = 1;
        }
    }

    for(int i = 0; i<a.size(); i++){
        for(int j = 1; j<r.size(); j++){
            if(a[i] == r[j]){
                for(int k = 0; k < i; k++){
                    ans[i][0][j] += ans[k][1][j - 1];
                }
            }
            if(b[i] == r[j] ){
                for(int k = 0; k < i; k++) {
                    ans[i][1][j] += ans[k][0][j -1];
                }
            }
        }
    }

    int res = 0;
    for(int i = 0; i<a.size(); i++){
        res+=(ans[i][0][r.size() - 1]+ans[i][1][r.size() - 1]);
    }
    cout << res;
}