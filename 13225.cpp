#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;

        for (int i=1; i<=n; i++)
            if(n%i==0)ans++;
        cout << n << " " << ans << "\n";
    }
}