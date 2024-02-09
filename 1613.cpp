#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;

    int bod[401][401];
    int lim = ((1<<31)-1)/2;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == j){
                bod[i][i] = 0;
                continue;
            }
            bod[i][j] = lim;
        }
    }

    while(m--){
        int a, b;
        cin >> a >>b;
        bod[a][b] = 1;
    }

    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(bod[i][j] > bod[i][k] + bod[k][j]){
                    bod[i][j] = bod[i][k] + bod[k][j];
                }
            }
        }
    }

    cin >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        if(bod[a][b] != lim){
            cout << -1;
        }else if(bod[b][a] != lim){
            cout << 1;
        }else{
            cout << 0;
        }
        cout << "\n";
    }
}