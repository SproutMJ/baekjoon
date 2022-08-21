#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, ans = 0;
    cin >>n;
    for (int i=1; i<=n; i++){
        int t;
        cin >> t;
        if(i!=t)ans++;
    }
    cout << ans;
}