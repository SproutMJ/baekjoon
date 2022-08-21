#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    int ans = 0;
    for (int i=1; i<=n; i++)
        if(n%i==0)ans+=i;
    cout << ans;
}