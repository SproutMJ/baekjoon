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
    for(auto &i: v){
        cin >> i;
    }

    vector<int> ans = v;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            if(v[j] > v[i]){
                ans[i] = max(ans[i], ans[j] + v[i]);
            }
        }
    }

    cout << *max_element(ans.begin(), ans.end());
}