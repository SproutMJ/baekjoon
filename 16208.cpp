#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
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

    sort(v.begin(), v.end());
    unsigned long long sum = accumulate(v.begin(), v.end(), 0);
    unsigned long long ans = 0;
    for(int i = 0; i < n - 1; i++){
        sum-=v[i];
        ans += sum*v[i];
    }

    cout << ans;

}