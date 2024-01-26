#include <iostream>
#include <queue>
#include <algorithm>
#include<numeric>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    vector<vector<int>> v(100000 + 1, vector<int>(3, 0));
    v[1] = {1, 0, 0};
    v[2] = {0, 1, 0};
    v[3] = {1, 1, 1};
    for(int i = 4; i <= 100000; i++){
        v[i][0] = (v[i - 1][1]%1000000009 + v[i - 1][2]%1000000009)%1000000009;
        v[i][1] = (v[i - 2][0]%1000000009 + v[i-2][2]%1000000009)%1000000009;
        v[i][2] = (v[i - 3][0]%1000000009 + v[i-3][1]%1000000009)%1000000009;
    }

    while(t--){
        int x;
        cin >> x;
        cout << ((v[x][0]%1000000009 + v[x][1]%1000000009)%1000000009 + v[x][2]%1000000009)%1000000009 << "\n";
    }

}