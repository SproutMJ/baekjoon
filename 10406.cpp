#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a,b,t, ans=0;
    cin >> a >>b >>t;
    for (int i=0; i<t; i++){
        int n;
        cin >>n;
        if(a<=n&&n<=b)ans++;
    }
    cout << ans;
}