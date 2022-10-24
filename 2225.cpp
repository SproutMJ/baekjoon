#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int arr[201][201];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,k;
    cin >> n>>k;

    for (int i=0; i<=n; i++){
        arr[1][i] = 1;
    }

    for(int i=1;i<=k;i++) {
        for(int j=0;j<=n;j++) {
            for(int l=0;l<=j;l++) {
                arr[i][j] += arr[i-1][j-l];
                arr[i][j]%=1000000000;
            }
        }
    }

    cout << arr[k][n];
}