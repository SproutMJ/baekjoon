#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    while(n--){
        int a;
        cin >> a;
        cout << a*(a+1)/2 << " ";
        long long even = 2, odd = 1, ans = 0, anss = 0;
        while(a--){
            ans += even;
            anss += odd;
            even+=2;
            odd += 2;
        }
        cout << anss << " " << ans << "\n";
    }
}