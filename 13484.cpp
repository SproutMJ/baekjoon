#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int x,n;
    cin >> x>>n;
    int ans = 0;

    while(n--){
        int a;
        cin >>a;

        if(a<=x)ans+=x-a;
        else ans-=a-x;
    }

    cout << ans+x;
}