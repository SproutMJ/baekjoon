#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &i:v){
        cin >>i ;
    }
    sort(v.begin(), v.end());
    vector<int> diff;
    for(int i = 1; i<n; i++){
        diff.push_back(v[i] - v[i-1]);
    }
    sort(diff.begin(), diff.end());
    int ans = 0;
    for(int i = 0 ;i<n-k; i++){
        ans+=diff[i];
    }
    cout <<ans;
}