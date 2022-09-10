#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;
    int ans = 0;
    while(n--){
        int a;
        bool flag = true;
        for (int i=0; i<m; i++){
            cin >> a;
            if(a == 0)flag = false;
        }
        if(flag) ans++;
    }
    cout << ans;
}