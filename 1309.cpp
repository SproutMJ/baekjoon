#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int zoo[100001][3];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    zoo[1][0]=1;
    zoo[1][1]=1;
    zoo[1][2]=1;

    for (int i=2; i<=n; i++){
        zoo[i][0] = (zoo[i-1][1]+zoo[i-1][2])%9901;
        zoo[i][1] = (zoo[i-1][0]+zoo[i-1][2])%9901;
        zoo[i][2] = (zoo[i-1][1]+zoo[i-1][2]+zoo[i-1][0])%9901;
    }

    cout << (zoo[n][0]+zoo[n][2]+zoo[n][1])%9901;
}