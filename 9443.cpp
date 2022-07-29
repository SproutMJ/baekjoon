#include <iostream>
#include <queue>
#include <algorithm>
int arr[26];
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v) cin >> i;

    for (const auto &i :v) arr[i.front()-'A'] = 1;

    int ans = 0;
    int idx = 0;
    while(true){
        if(arr[idx]>0){
            ans++;
            arr[idx]--;
        }else{
            break;
        }

        idx++;
        idx%=26;
    }

    cout << ans;
}