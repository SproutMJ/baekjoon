#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    int ans = n;

    while(true){
        string s = to_string(ans);
        if(ans%accumulate(s.begin(), s.end(), 0, [](int sum, char val)->int{return sum+(val-'0');}) == 0){
            cout << ans;
            break;
        }
        ans++;
    }


}