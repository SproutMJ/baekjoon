#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int num, n;
    cin >> num >> n;
    vector<int> v(n);

    int mn = 1, mx = 0;
    for(auto &i : v){
        cin >> i;
        mx = max(mx, i);
    }

    int ans = 0;
    while(mn<=mx){
        int mid = (mn+mx)/2;

        int tmp = 0;
        for(const auto &i: v){
            tmp+=(i/mid);
        }

        if(tmp>=num){
            ans = max(ans, mid);
            mn = mid+1;
        }else{
            mx = mid-1;
        }
    }

    cout << ans;
}