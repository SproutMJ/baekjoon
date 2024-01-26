#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i :v){
        cin >> i;
    }

    vector<int> ans(n, 0);
    for(int i = n - 1; i >= 0; i--){
        if(i + v[i] + 1 >= n){
            ans[i] = 1;
            continue;
        }
        ans[i] = ans[i + v[i] + 1] + 1;
    }

    for(int i = 0; i<n; i++){
        cout << ans[i] << " ";
    }
}