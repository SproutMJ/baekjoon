#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t, ans = 0;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        ans+=pow(n/10,n%10);
    }
    cout << ans;
}