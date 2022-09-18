#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    bool run = false;
    int n, ans = 0, before = 0;
    cin >> n;
    while(n--){
        int a;
        cin >>a;
        if(run){
            ans += a - before;
        }
        run = !run;
        before = a;
    }

    if(run)cout << "still running";
    else cout << ans;
}